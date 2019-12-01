#[repr(C)]
struct PascalCaseStruct {
	A: u8,
}

#[repr(C)]
struct snake_case_struct {
	A: u8,
}

#[repr(C)]
struct single {
	A: u8
}

#[no_mangle]
pub extern "C" fn root(a: PascalCaseStruct, b: snake_case_struct, c: single) {

}

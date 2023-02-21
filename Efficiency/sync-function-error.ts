// validates all errors and returns all errors found
// useful when you want to validate all errors before throwing them
export function ValidateEvent(event: any): void {
  const errors: Error[] = [];

  try {
    if (true) {
      throw new Error(`Invalid path parameters:`);
    }
  } catch (error: any) {
    errors.push(error);
  }

  try {
    // call function1()
  } catch (error: any) {}

  try {
  } catch (error: any) {
    //call function2
    errors.push(error);
  }

  if (errors.length > 0) {
    // throws all errors found
    throw errors;
  }
}

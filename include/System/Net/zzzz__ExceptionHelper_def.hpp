#pragma once
// IWYU pragma private; include "System/Net/ExceptionHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ExceptionHelper)
namespace System::Net {
class WebException;
}
namespace System {
class NotImplementedException;
}
namespace System {
class NotSupportedException;
}
// Forward declare root types
namespace System::Net {
class ExceptionHelper;
}
// Write type traits
MARK_REF_T(::System::Net::ExceptionHelper*);
DEFINE_IL2CPP_CLASS(::System::Net::ExceptionHelper*, "System.Net", "ExceptionHelper");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.ExceptionHelper
class CORDL_TYPE ExceptionHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method get_MethodNotImplementedException, addr 0x6833e48, size 0x84, virtual false, abstract: false, final false
  static inline ::System::NotImplementedException* get_MethodNotImplementedException();

  /// @brief Method get_PropertyNotImplementedException, addr 0x6833da0, size 0x84, virtual false, abstract: false, final false
  static inline ::System::NotImplementedException* get_PropertyNotImplementedException();

  /// @brief Method get_PropertyNotSupportedException, addr 0x68329d8, size 0x84, virtual false, abstract: false, final false
  static inline ::System::NotSupportedException* get_PropertyNotSupportedException();

  /// @brief Method get_RequestAbortedException, addr 0x682b084, size 0x94, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* get_RequestAbortedException();

  /// @brief Method get_TimeoutException, addr 0x682d740, size 0x8c, virtual false, abstract: false, final false
  static inline ::System::Net::WebException* get_TimeoutException();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExceptionHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelper", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExceptionHelper(ExceptionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExceptionHelper", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExceptionHelper(ExceptionHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12434 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::ExceptionHelper) == 0x10, "Size mismatch!");

} // namespace System::Net

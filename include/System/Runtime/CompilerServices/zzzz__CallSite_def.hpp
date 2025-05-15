#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/CallSite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallSite)
namespace System::Runtime::CompilerServices {
class CallSiteBinder;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CallSite;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CallSite);
// Dependencies System.Object
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: System.Runtime.CompilerServices.CallSite
class CORDL_TYPE CallSite : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Binder)) ::System::Runtime::CompilerServices::CallSiteBinder* Binder;

  /// @brief Field _binder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__binder, put = __cordl_internal_set__binder)) ::System::Runtime::CompilerServices::CallSiteBinder* _binder;

  /// @brief Field _match, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__match, put = __cordl_internal_set__match)) bool _match;

  static inline ::System::Runtime::CompilerServices::CallSite* New_ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder);

  constexpr ::System::Runtime::CompilerServices::CallSiteBinder* const& __cordl_internal_get__binder() const;

  constexpr ::System::Runtime::CompilerServices::CallSiteBinder*& __cordl_internal_get__binder();

  constexpr bool const& __cordl_internal_get__match() const;

  constexpr bool& __cordl_internal_get__match();

  constexpr void __cordl_internal_set__binder(::System::Runtime::CompilerServices::CallSiteBinder* value);

  constexpr void __cordl_internal_set__match(bool value);

  /// @brief Method .ctor, addr 0x40fb3e8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::CompilerServices::CallSiteBinder* binder);

  /// @brief Method get_Binder, addr 0x40fb410, size 0x8, virtual false, abstract: false, final false
  inline ::System::Runtime::CompilerServices::CallSiteBinder* get_Binder();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallSite();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CallSite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallSite(CallSite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallSite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallSite(CallSite const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14132 };

  /// @brief Field _binder, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::CallSiteBinder* ____binder;

  /// @brief Field _match, offset: 0x18, size: 0x1, def value: None
  bool ____match;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::CompilerServices::CallSite, ____binder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::CompilerServices::CallSite, ____match) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CallSite, 0x20>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CallSite);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallSite*, "System.Runtime.CompilerServices", "CallSite");

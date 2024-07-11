#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowGetBinderMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__GetMemberBinder_def.hpp"
CORDL_MODULE_EXPORT(NoThrowGetBinderMember)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class GetMemberBinder;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class NoThrowGetBinderMember;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember);
// Type: Newtonsoft.Json.Utilities::NoThrowGetBinderMember
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::NoThrowGetBinderMember*
class CORDL_TYPE NoThrowGetBinderMember : public ::System::Dynamic::GetMemberBinder {
public:
  // Declarations
  /// @brief Field _innerBinder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__innerBinder, put = __cordl_internal_set__innerBinder))::System::Dynamic::GetMemberBinder* _innerBinder;

  /// @brief Method FallbackGetMember, addr 0x2a42518, size 0x13c, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  static inline ::Newtonsoft::Json::Utilities::NoThrowGetBinderMember* New_ctor(::System::Dynamic::GetMemberBinder* innerBinder);

  constexpr ::System::Dynamic::GetMemberBinder*& __cordl_internal_get__innerBinder();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::GetMemberBinder*> const& __cordl_internal_get__innerBinder() const;

  constexpr void __cordl_internal_set__innerBinder(::System::Dynamic::GetMemberBinder* value);

  /// @brief Method .ctor, addr 0x2a424e0, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::GetMemberBinder* innerBinder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoThrowGetBinderMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoThrowGetBinderMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoThrowGetBinderMember(NoThrowGetBinderMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoThrowGetBinderMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoThrowGetBinderMember(NoThrowGetBinderMember const&) = delete;

  /// @brief Field _innerBinder, offset: 0x28, size: 0x8, def value: None
  ::System::Dynamic::GetMemberBinder* ____innerBinder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::NoThrowGetBinderMember, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember, ____innerBinder) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::NoThrowGetBinderMember*, "Newtonsoft.Json.Utilities", "NoThrowGetBinderMember");

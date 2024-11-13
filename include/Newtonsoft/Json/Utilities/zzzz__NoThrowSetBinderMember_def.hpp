#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/NoThrowSetBinderMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Dynamic/zzzz__SetMemberBinder_def.hpp"
CORDL_MODULE_EXPORT(NoThrowSetBinderMember)
namespace System::Dynamic {
class DynamicMetaObject;
}
namespace System::Dynamic {
class SetMemberBinder;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class NoThrowSetBinderMember;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::NoThrowSetBinderMember);
// Type: Newtonsoft.Json.Utilities::NoThrowSetBinderMember
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Utilities::NoThrowSetBinderMember*
class CORDL_TYPE NoThrowSetBinderMember : public ::System::Dynamic::SetMemberBinder {
public:
  // Declarations
  /// @brief Field _innerBinder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__innerBinder, put = __cordl_internal_set__innerBinder)) ::System::Dynamic::SetMemberBinder* _innerBinder;

  /// @brief Method FallbackSetMember, addr 0x3e681fc, size 0x148, virtual true, abstract: false, final false
  inline ::System::Dynamic::DynamicMetaObject* FallbackSetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* value,
                                                                 ::System::Dynamic::DynamicMetaObject* errorSuggestion);

  static inline ::Newtonsoft::Json::Utilities::NoThrowSetBinderMember* New_ctor(::System::Dynamic::SetMemberBinder* innerBinder);

  constexpr ::System::Dynamic::SetMemberBinder*& __cordl_internal_get__innerBinder();

  constexpr ::cordl_internals::to_const_pointer<::System::Dynamic::SetMemberBinder*> const& __cordl_internal_get__innerBinder() const;

  constexpr void __cordl_internal_set__innerBinder(::System::Dynamic::SetMemberBinder* value);

  /// @brief Method .ctor, addr 0x3e681c4, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::Dynamic::SetMemberBinder* innerBinder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoThrowSetBinderMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoThrowSetBinderMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoThrowSetBinderMember(NoThrowSetBinderMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoThrowSetBinderMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoThrowSetBinderMember(NoThrowSetBinderMember const&) = delete;

  /// @brief Field _innerBinder, offset: 0x28, size: 0x8, def value: None
  ::System::Dynamic::SetMemberBinder* ____innerBinder;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10198 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::NoThrowSetBinderMember, 0x30>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Utilities::NoThrowSetBinderMember, ____innerBinder) == 0x28, "Offset mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::NoThrowSetBinderMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::NoThrowSetBinderMember*, "Newtonsoft.Json.Utilities", "NoThrowSetBinderMember");

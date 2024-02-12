#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MatchmakingEnqueuedUser)
namespace Oculus::Platform::Models {
class User;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class MatchmakingEnqueuedUser;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::MatchmakingEnqueuedUser);
// Type: Oculus.Platform.Models::MatchmakingEnqueuedUser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13400))
// CS Name: ::Oculus.Platform.Models::MatchmakingEnqueuedUser*
class CORDL_TYPE MatchmakingEnqueuedUser : public ::System::Object {
public:
  // Declarations
  /// @brief Field CustomData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_CustomData, put = __cordl_internal_set_CustomData))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* CustomData;

  /// @brief Field UserOptional, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_UserOptional, put = __cordl_internal_set_UserOptional))::Oculus::Platform::Models::User* UserOptional;

  /// @brief Field User, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_User, put = __cordl_internal_set_User))::Oculus::Platform::Models::User* User;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get_CustomData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get_CustomData() const;

  constexpr void __cordl_internal_set_CustomData(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_UserOptional();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_UserOptional() const;

  constexpr void __cordl_internal_set_UserOptional(::Oculus::Platform::Models::User* value);

  constexpr ::Oculus::Platform::Models::User*& __cordl_internal_get_User();

  constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& __cordl_internal_get_User() const;

  constexpr void __cordl_internal_set_User(::Oculus::Platform::Models::User* value);

  static inline ::Oculus::Platform::Models::MatchmakingEnqueuedUser* New_ctor(void* o);

  /// @brief Method .ctor, addr 0x273abc0, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MatchmakingEnqueuedUser(MatchmakingEnqueuedUser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MatchmakingEnqueuedUser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MatchmakingEnqueuedUser(MatchmakingEnqueuedUser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchmakingEnqueuedUser();

public:
  /// @brief Field CustomData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ___CustomData;

  /// @brief Field UserOptional, offset: 0x18, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___UserOptional;

  /// @brief Field User, offset: 0x20, size: 0x8, def value: None
  ::Oculus::Platform::Models::User* ___User;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::MatchmakingEnqueuedUser, 0x28>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueuedUser, ___CustomData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueuedUser, ___UserOptional) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Platform::Models::MatchmakingEnqueuedUser, ___User) == 0x20, "Offset mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::MatchmakingEnqueuedUser);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::MatchmakingEnqueuedUser*, "Oculus.Platform.Models", "MatchmakingEnqueuedUser");

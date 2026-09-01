#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRSpaceUser.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpaceUser)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpaceUser;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpaceUser);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRSpaceUser, "", "OVRSpaceUser");
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpaceUser
struct CORDL_TYPE OVRSpaceUser {
public:
  // Declarations
  __declspec(property(get = get_Id)) uint64_t Id;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x5ed342c, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method TryCreate, addr 0x5ed32c4, size 0x48, virtual false, abstract: false, final false
  static inline bool TryCreate(::StringW platformUserId, ::by_ref<::GlobalNamespace::OVRSpaceUser> spaceUser);

  /// @brief Method TryCreate, addr 0x5ed3254, size 0x70, virtual false, abstract: false, final false
  static inline bool TryCreate(uint64_t platformUserId, ::by_ref<::GlobalNamespace::OVRSpaceUser> spaceUser);

  /// @brief Method .ctor, addr 0x5ed33c0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t spaceUserId);

  /// @brief Method get_Id, addr 0x5ed3334, size 0x8c, virtual false, abstract: false, final false
  inline uint64_t get_Id();

  /// @brief Method get_Valid, addr 0x5ed330c, size 0x28, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceUser();

  // Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSpaceUser(uint64_t _handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7708 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
  uint64_t _handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpaceUser, _handle) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRSpaceUser) == 0x8, "Size mismatch!");

} // namespace GlobalNamespace

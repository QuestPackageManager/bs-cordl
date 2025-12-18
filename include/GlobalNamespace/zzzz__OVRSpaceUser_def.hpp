#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpaceUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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

  /// @brief Method Dispose, addr 0x5d24f70, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method TryCreate, addr 0x5d24e08, size 0x48, virtual false, abstract: false, final false
  static inline bool TryCreate(::StringW platformUserId, ::ByRef<::GlobalNamespace::OVRSpaceUser> spaceUser);

  /// @brief Method TryCreate, addr 0x5d24d98, size 0x70, virtual false, abstract: false, final false
  static inline bool TryCreate(uint64_t platformUserId, ::ByRef<::GlobalNamespace::OVRSpaceUser> spaceUser);

  /// @brief Method .ctor, addr 0x5d24f04, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(uint64_t spaceUserId);

  /// @brief Method get_Id, addr 0x5d24e78, size 0x8c, virtual false, abstract: false, final false
  inline uint64_t get_Id();

  /// @brief Method get_Valid, addr 0x5d24e50, size 0x28, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceUser();

  // Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSpaceUser(uint64_t _handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7689 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
  uint64_t _handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpaceUser, _handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceUser, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceUser, "", "OVRSpaceUser");

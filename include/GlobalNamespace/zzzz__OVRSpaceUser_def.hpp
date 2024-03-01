#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
// Type: ::OVRSpaceUser
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRSpaceUser
struct CORDL_TYPE OVRSpaceUser {
public:
  // Declarations
  __declspec(property(get = get_Id)) uint64_t Id;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x2885778, size 0x64, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x2885710, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(uint64_t spaceUserId);

  /// @brief Method get_Id, addr 0x288564c, size 0x7c, virtual false, abstract: false, final false
  inline uint64_t get_Id();

  /// @brief Method get_Valid, addr 0x28856e8, size 0x28, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpaceUser();

  // Ctor Parameters [CppParam { name: "_handle", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSpaceUser(uint64_t _handle) noexcept;

  /// @brief Field _handle, offset: 0x0, size: 0x8, def value: None
  uint64_t _handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpaceUser, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSpaceUser, _handle) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpaceUser, "", "OVRSpaceUser");

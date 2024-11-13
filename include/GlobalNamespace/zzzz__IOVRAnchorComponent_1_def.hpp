#pragma once
// IWYU pragma private; include "GlobalNamespace/IOVRAnchorComponent_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IOVRAnchorComponent_1)
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::IOVRAnchorComponent_1);
// Type: ::IOVRAnchorComponent`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::IOVRAnchorComponent`1<T>*
class CORDL_TYPE IOVRAnchorComponent_1 {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  __declspec(property(get = get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  /// @brief Method FromAnchor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline T FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method SetEnabledAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enable, double_t timeout);

  /// @brief Method get_Handle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  // Ctor Parameters [CppParam { name: "", ty: "IOVRAnchorComponent_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOVRAnchorComponent_1(IOVRAnchorComponent_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOVRAnchorComponent_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOVRAnchorComponent_1(IOVRAnchorComponent_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7797 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::IOVRAnchorComponent_1, "", "IOVRAnchorComponent`1");

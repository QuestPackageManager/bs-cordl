#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSpace.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpace)
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRSpace_StorageLocation;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRSpace_StorageLocation);
MARK_VAL_T(::GlobalNamespace::OVRSpace);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpace/StorageLocation
struct CORDL_TYPE OVRSpace_StorageLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRSpace_StorageLocation_Unwrapped
  enum struct __OVRSpace_StorageLocation_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Cloud = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRSpace_StorageLocation_Unwrapped() const noexcept {
    return static_cast<__OVRSpace_StorageLocation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpace_StorageLocation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRSpace_StorageLocation(int32_t value__) noexcept;

  /// @brief Field Cloud value: I32(1)
  static ::GlobalNamespace::OVRSpace_StorageLocation const Cloud;

  /// @brief Field Local value: I32(0)
  static ::GlobalNamespace::OVRSpace_StorageLocation const Local;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7684 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpace_StorageLocation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpace_StorageLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRSpace
struct CORDL_TYPE OVRSpace {
public:
  // Declarations
  using StorageLocation = ::GlobalNamespace::OVRSpace_StorageLocation;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRSpace>*();

  /// @brief Method Equals, addr 0x5d2336c, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x5d2335c, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRSpace other);

  /// @brief Method GetHashCode, addr 0x5d233e8, size 0xc, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x5d232c4, size 0x98, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetUuid, addr 0x5d2324c, size 0x70, virtual false, abstract: false, final false
  inline bool TryGetUuid(::ByRef<::System::Guid> uuid);

  /// @brief Method .ctor, addr 0x5d232bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t handle);

  /// @brief Method get_Handle, addr 0x5d23244, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_Valid, addr 0x5d1c62c, size 0x10, virtual false, abstract: false, final false
  inline bool get_Valid();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRSpace>* i___System__IEquatable_1___GlobalNamespace__OVRSpace_();

  /// @brief Method op_Equality, addr 0x5d233f4, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs);

  /// @brief Method op_Implicit, addr 0x5d17c2c, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRSpace op_Implicit___GlobalNamespace__OVRSpace(uint64_t handle);

  /// @brief Method op_Implicit, addr 0x5d17c30, size 0x4, virtual false, abstract: false, final false
  static inline uint64_t op_Implicit_uint64_t(::GlobalNamespace::OVRSpace space);

  /// @brief Method op_Inequality, addr 0x5d23400, size 0xc, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpace();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSpace(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7685 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSpace, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpace, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpace_StorageLocation, "", "OVRSpace/StorageLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpace, "", "OVRSpace");

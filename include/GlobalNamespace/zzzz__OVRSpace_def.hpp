#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSpace)
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRSpace__StorageLocation;
}
namespace GlobalNamespace {
struct OVRSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRSpace__StorageLocation);
MARK_VAL_T(::GlobalNamespace::OVRSpace);
// Type: ::StorageLocation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7990))
// CS Name: ::OVRSpace::StorageLocation
struct CORDL_TYPE __OVRSpace__StorageLocation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____OVRSpace__StorageLocation_Unwrapped
  enum struct ____OVRSpace__StorageLocation_Unwrapped : int32_t {
    __E_Local = static_cast<int32_t>(0x0),
    __E_Cloud = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____OVRSpace__StorageLocation_Unwrapped() const noexcept {
    return static_cast<____OVRSpace__StorageLocation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRSpace__StorageLocation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSpace__StorageLocation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Local value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__OVRSpace__StorageLocation const Local;

  /// @brief Field Cloud value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__OVRSpace__StorageLocation const Cloud;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSpace__StorageLocation, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSpace
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7991))
// CS Name: ::OVRSpace
struct CORDL_TYPE OVRSpace {
public:
  // Declarations
  using StorageLocation = ::GlobalNamespace::__OVRSpace__StorageLocation;

  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = get_Valid)) bool Valid;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRSpace>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRSpace>*();

  /// @brief Method get_Handle addr 0x278c884 size 0x8 virtual false final false
  inline uint64_t get_Handle();

  /// @brief Method TryGetUuid addr 0x278c88c size 0x6c virtual false final false
  inline bool TryGetUuid(ByRef<::System::Guid> uuid);

  /// @brief Method get_Valid addr 0x277fb64 size 0x10 virtual false final false
  inline bool get_Valid();

  /// @brief Method .ctor addr 0x278c8f8 size 0x8 virtual false final false
  inline void _ctor(uint64_t handle);

  /// @brief Method ToString addr 0x278c900 size 0x84 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x278c984 size 0x10 virtual true final true
  inline bool Equals(::GlobalNamespace::OVRSpace other);

  /// @brief Method Equals addr 0x278c994 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x278ca0c size 0x20 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x278ca2c size 0xc virtual false final false
  static inline bool op_Equality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs);

  /// @brief Method op_Inequality addr 0x278ca38 size 0xc virtual false final false
  static inline bool op_Inequality(::GlobalNamespace::OVRSpace lhs, ::GlobalNamespace::OVRSpace rhs);

  /// @brief Method op_Implicit addr 0x277fb60 size 0x4 virtual false final false
  static inline ::GlobalNamespace::OVRSpace op_Implicit___GlobalNamespace__OVRSpace(uint64_t handle);

  /// @brief Method op_Implicit addr 0x277f7e0 size 0x4 virtual false final false
  static inline uint64_t op_Implicit_uint64_t(::GlobalNamespace::OVRSpace space);

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRSpace(uint64_t _Handle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSpace();

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSpace, 0x8>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSpace__StorageLocation, "", "OVRSpace/StorageLocation");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSpace, "", "OVRSpace");

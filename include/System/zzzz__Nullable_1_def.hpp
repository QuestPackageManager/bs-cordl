#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Nullable_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T> struct Nullable_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Nullable_1);
// Type: System::Nullable`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::System::Nullable`1<T>
struct CORDL_TYPE Nullable_1 {
public:
  // Declarations
  __declspec(property(get = get_HasValue)) bool HasValue;

  __declspec(property(get = get_Value)) T Value;

  /// @brief Method Box, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* Box(::System::Nullable_1<T> o);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueOrDefault();

  /// @brief Method GetValueOrDefault, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValueOrDefault(T defaultValue);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Unbox, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<T> Unbox(::System::Object* o);

  /// @brief Method UnboxExact, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<T> UnboxExact(::System::Object* o);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  /// @brief Method get_HasValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_HasValue();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr Nullable_1();

  // Ctor Parameters [CppParam { name: "hasValue", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "value", ty: "T", modifiers: "", def_value: None }]
  constexpr Nullable_1(bool hasValue, T value) noexcept;

  /// @brief Field hasValue, offset: 0x0, size: 0x1, def value: None
  bool hasValue;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  T value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Nullable_1, "System", "Nullable`1");

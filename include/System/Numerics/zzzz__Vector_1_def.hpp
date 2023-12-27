#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/Numerics/zzzz__Vector_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector_1)
namespace System {
class Object;
}
namespace System {
class IFormatProvider;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class IFormattable;
}
namespace System::Numerics {
template <typename T> struct __Vector_1__VectorSizeHelper;
}
namespace System::Numerics {
struct Register;
}
// Forward declare root types
namespace System::Numerics {
template <typename T> struct Vector_1;
}
namespace System::Numerics {
template <typename T> struct __Vector_1__VectorSizeHelper;
}
// Write type traits
MARK_GEN_VAL_T(::System::Numerics::Vector_1);
MARK_GEN_VAL_T(::System::Numerics::__Vector_1__VectorSizeHelper);
// Type: System.Numerics::Vector`1
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3553)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3553), inst: 5347 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3551))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3553)) CS Name: ::System.Numerics::Vector`1<T>
struct CORDL_TYPE Vector_1 {
public:
  // Declarations
  using VectorSizeHelper = ::System::Numerics::__Vector_1__VectorSizeHelper<T>;

  /// @brief Field s_count, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_count, put = setStaticF_s_count)) int32_t s_count;

  /// @brief Field s_zero, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_zero, put = setStaticF_s_zero))::System::Numerics::Vector_1<T> s_zero;

  /// @brief Field s_one, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_one, put = setStaticF_s_one))::System::Numerics::Vector_1<T> s_one;

  /// @brief Field s_allOnes, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_s_allOnes, put = setStaticF_s_allOnes))::System::Numerics::Vector_1<T> s_allOnes;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
  constexpr operator ::System::IEquatable_1<::System::Numerics::Vector_1<T>>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  static inline void setStaticF_s_count(int32_t value);

  static inline int32_t getStaticF_s_count();

  static inline void setStaticF_s_zero(::System::Numerics::Vector_1<T> value);

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_zero();

  static inline void setStaticF_s_one(::System::Numerics::Vector_1<T> value);

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_one();

  static inline void setStaticF_s_allOnes(::System::Numerics::Vector_1<T> value);

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_allOnes();

  /// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline int32_t get_Count();

  /// @brief Method get_Zero addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Numerics::Vector_1<T> get_Zero();

  /// @brief Method InitializeCount addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline int32_t InitializeCount();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(T value);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::cordl_internals::Ptr<void> dataPointer);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::cordl_internals::Ptr<void> dataPointer, int32_t offset);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(ByRef<::System::Numerics::Register> existingRegister);

  /// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_Item(int32_t index);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
  inline bool Equals(::System::Numerics::Vector_1<T> other);

  /// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method op_Equality addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool op_Equality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method op_Inequality addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool op_Inequality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method op_Explicit addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<T> value);

  /// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Numerics::Vector_1<T> Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method ScalarEquals addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline bool ScalarEquals(T left, T right);

  /// @brief Method GetOneValue addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetOneValue();

  /// @brief Method GetAllBitsSetValue addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T GetAllBitsSetValue();

  // Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
  constexpr Vector_1(::System::Numerics::Register _cordl_register) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector_1();

  /// @brief Field register, offset: 0x0, size: 0x10, def value: None
  ::System::Numerics::Register _cordl_register;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Numerics
// Type: ::VectorSizeHelper
// SizeInfo { instance_size: 24, native_size: 33, calculated_instance_size: 24, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// cpp template
template <typename T>
// Is value type: true
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3553), inst: 5348 }), TypeDefinitionIndex(TypeDefinitionIndex(3553))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3552))
// CS Name: ::Vector`1::VectorSizeHelper<T>
struct CORDL_TYPE __Vector_1__VectorSizeHelper {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: None }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: None
  // }]
  constexpr __Vector_1__VectorSizeHelper(::System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Vector_1__VectorSizeHelper();

  /// @brief Field _placeholder, offset: 0x0, size: 0x10, def value: None
  ::System::Numerics::Vector_1<T> _placeholder;

  /// @brief Field _byte, offset: 0x10, size: 0x1, def value: None
  uint8_t _byte;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Numerics
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::Vector_1, "System.Numerics", "Vector`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::__Vector_1__VectorSizeHelper, "System.Numerics", "Vector`1/VectorSizeHelper");

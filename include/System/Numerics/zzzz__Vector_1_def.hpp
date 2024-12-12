#pragma once
// IWYU pragma private; include "System/Numerics/Vector_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Numerics/zzzz__Register_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IFormattable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Vector_1)
namespace System::Numerics {
struct Register;
}
namespace System::Numerics {
template <typename T> struct Vector_1_VectorSizeHelper;
}
namespace System {
class IFormatProvider;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Numerics {
template <typename T> struct Vector_1;
}
namespace System::Numerics {
template <typename T> struct Vector_1_VectorSizeHelper;
}
// Write type traits
MARK_GEN_VAL_T(::System::Numerics::Vector_1);
MARK_GEN_VAL_T(::System::Numerics::Vector_1_VectorSizeHelper);
// Dependencies System.IEquatable`1<T>, System.IFormattable, System.Numerics.Register
namespace System::Numerics {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Numerics.Vector`1<T>
struct CORDL_TYPE Vector_1 {
public:
  // Declarations
  using VectorSizeHelper = ::System::Numerics::Vector_1_VectorSizeHelper<T>;

  __declspec(property(get = get_Item)) T Item[];

  /// @brief Field s_allOnes, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_allOnes, put = setStaticF_s_allOnes)) ::System::Numerics::Vector_1<T> s_allOnes;

  /// @brief Field s_count, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_count, put = setStaticF_s_count)) int32_t s_count;

  /// @brief Field s_one, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_one, put = setStaticF_s_one)) ::System::Numerics::Vector_1<T> s_one;

  /// @brief Field s_zero, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_zero, put = setStaticF_s_zero)) ::System::Numerics::Vector_1<T> s_zero;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
  constexpr operator ::System::IEquatable_1<::System::Numerics::Vector_1<T>>*();

  /// @brief Convert operator to "::System::IFormattable"
  constexpr operator ::System::IFormattable*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Numerics::Vector_1<T> Equals(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::Numerics::Vector_1<T> other);

  /// @brief Method GetAllBitsSetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetAllBitsSetValue();

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetOneValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline T GetOneValue();

  /// @brief Method InitializeCount, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t InitializeCount();

  /// @brief Method ScalarEquals, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool ScalarEquals(T left, T right);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> dataPointer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> dataPointer, int32_t offset);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::System::Numerics::Register> existingRegister);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T value);

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_allOnes();

  static inline int32_t getStaticF_s_count();

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_one();

  static inline ::System::Numerics::Vector_1<T> getStaticF_s_zero();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item(int32_t index);

  /// @brief Method get_Zero, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Numerics::Vector_1<T> get_Zero();

  /// @brief Convert to "::System::IEquatable_1<::System::Numerics::Vector_1<T>>"
  constexpr ::System::IEquatable_1<::System::Numerics::Vector_1<T>>* i___System__IEquatable_1___System__Numerics__Vector_1_T__();

  /// @brief Convert to "::System::IFormattable"
  constexpr ::System::IFormattable* i___System__IFormattable();

  /// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  /// @brief Method op_Explicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Numerics::Vector_1<uint64_t> op_Explicit___System__Numerics__Vector_1_uint64_t_(::System::Numerics::Vector_1<T> value);

  /// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool op_Inequality(::System::Numerics::Vector_1<T> left, ::System::Numerics::Vector_1<T> right);

  static inline void setStaticF_s_allOnes(::System::Numerics::Vector_1<T> value);

  static inline void setStaticF_s_count(int32_t value);

  static inline void setStaticF_s_one(::System::Numerics::Vector_1<T> value);

  static inline void setStaticF_s_zero(::System::Numerics::Vector_1<T> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector_1();

  // Ctor Parameters [CppParam { name: "_cordl_register", ty: "::System::Numerics::Register", modifiers: "", def_value: None }]
  constexpr Vector_1(::System::Numerics::Register _cordl_register) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3556 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field register, offset: 0x0, size: 0x10, def value: None
  ::System::Numerics::Register _cordl_register;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Numerics
// Dependencies System.Numerics.Vector`1<T>
namespace System::Numerics {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Numerics.Vector`1/VectorSizeHelper<T>
struct CORDL_TYPE Vector_1_VectorSizeHelper {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector_1_VectorSizeHelper();

  // Ctor Parameters [CppParam { name: "_placeholder", ty: "::System::Numerics::Vector_1<T>", modifiers: "", def_value: None }, CppParam { name: "_byte", ty: "uint8_t", modifiers: "", def_value: None
  // }]
  constexpr Vector_1_VectorSizeHelper(::System::Numerics::Vector_1<T> _placeholder, uint8_t _byte) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3555 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _placeholder, offset: 0x0, size: 0x10, def value: None
  ::System::Numerics::Vector_1<T> _placeholder;

  /// @brief Field _byte, offset: 0x10, size: 0x1, def value: None
  uint8_t _byte;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Numerics
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::Vector_1, "System.Numerics", "Vector`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Numerics::Vector_1_VectorSizeHelper, "System.Numerics", "Vector`1/VectorSizeHelper");

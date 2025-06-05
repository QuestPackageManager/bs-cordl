#pragma once
// IWYU pragma private; include "UnityEngine/Hash128.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hash128)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct Hash128;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Hash128);
// Dependencies System.IComparable, System.IComparable`1<T>, System.IEquatable`1<T>
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.Hash128
struct CORDL_TYPE Hash128 {
public:
  // Declarations
  __declspec(property(get = get_isValid)) bool isValid;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Hash128>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Hash128>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Hash128>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Hash128>*();

  /// @brief Method CompareTo, addr 0x489a9e8, size 0xbc, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x489a69c, size 0x54, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Hash128 rhs);

  /// @brief Method Compute, addr 0x489a8a8, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Compute(::StringW data);

  /// @brief Method ComputeFromString, addr 0x489a864, size 0x44, virtual false, abstract: false, final false
  static inline void ComputeFromString(::StringW data, ::ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method Equals, addr 0x489a8fc, size 0x84, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x489a998, size 0x1c, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Hash128 obj);

  /// @brief Method GetHashCode, addr 0x489a9b4, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Hash128ToStringImpl, addr 0x489a750, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW Hash128ToStringImpl(::UnityEngine::Hash128 hash);

  /// @brief Method Hash128ToStringImpl_Injected, addr 0x489a828, size 0x3c, virtual false, abstract: false, final false
  static inline ::StringW Hash128ToStringImpl_Injected(::ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method Parse, addr 0x489a790, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Parse(::StringW hashString);

  /// @brief Method Parse_Injected, addr 0x489a7e4, size 0x44, virtual false, abstract: false, final false
  static inline void Parse_Injected(::StringW hashString, ::ByRef<::UnityEngine::Hash128> ret);

  /// @brief Method ToString, addr 0x489a744, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x489a674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t u64_0, uint64_t u64_1);

  /// @brief Method get_isValid, addr 0x489a67c, size 0x20, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Hash128>"
  constexpr ::System::IComparable_1<::UnityEngine::Hash128>* i___System__IComparable_1___UnityEngine__Hash128_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Hash128>"
  constexpr ::System::IEquatable_1<::UnityEngine::Hash128>* i___System__IEquatable_1___UnityEngine__Hash128_();

  /// @brief Method op_Equality, addr 0x489a980, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2);

  /// @brief Method op_GreaterThan, addr 0x489a708, size 0x3c, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  /// @brief Method op_Inequality, addr 0x489aaa4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2);

  /// @brief Method op_LessThan, addr 0x489a6f0, size 0x18, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128();

  // Ctor Parameters [CppParam { name: "u64_0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "u64_1", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Hash128(uint64_t u64_0, uint64_t u64_1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10801 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field u64_0, offset: 0x0, size: 0x8, def value: None
  uint64_t u64_0;

  /// @brief Field u64_1, offset: 0x8, size: 0x8, def value: None
  uint64_t u64_1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Hash128, u64_0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Hash128, u64_1) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Hash128, 0x10>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Hash128, "UnityEngine", "Hash128");

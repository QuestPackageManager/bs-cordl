#pragma once
// IWYU pragma private; include "UnityEngine/Hash128.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Hash128)
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
// Forward declare root types
namespace UnityEngine {
struct Hash128;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Hash128);
// Dependencies
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

  /// @brief Method Append, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Append(::ByRef<T> val);

  /// @brief Method Append, addr 0x68fd240, size 0x4, virtual false, abstract: false, final false
  inline void Append(int32_t val);

  /// @brief Method CompareTo, addr 0x68fd368, size 0xb8, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  /// @brief Method CompareTo, addr 0x68fce58, size 0x4c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Hash128 rhs);

  /// @brief Method Compute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::UnityEngine::Hash128 Compute(::ByRef<T> val);

  /// @brief Method Compute, addr 0x68fd1e8, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Compute(int32_t val);

  /// @brief Method ComputeFromPtr, addr 0x68fd17c, size 0x6c, virtual false, abstract: false, final false
  static inline void ComputeFromPtr(::System::IntPtr data, int32_t start, int32_t count, int32_t elemSize, ::ByRef<::UnityEngine::Hash128> hash);

  /// @brief Method Equals, addr 0x68fd2ac, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68fd33c, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Hash128 obj);

  /// @brief Method GetHashCode, addr 0x68fd350, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Hash128ToStringImpl, addr 0x68fcef0, size 0xd0, virtual false, abstract: false, final false
  static inline ::StringW Hash128ToStringImpl(::UnityEngine::Hash128 hash);

  /// @brief Method Hash128ToStringImpl_Injected, addr 0x68fd138, size 0x44, virtual false, abstract: false, final false
  static inline void Hash128ToStringImpl_Injected(::ByRef<::UnityEngine::Hash128> hash, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret);

  /// @brief Method Parse, addr 0x68fcfc0, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityEngine::Hash128 Parse(::StringW hashString);

  /// @brief Method Parse_Injected, addr 0x68fd0f4, size 0x44, virtual false, abstract: false, final false
  static inline void Parse_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> hashString, ::ByRef<::UnityEngine::Hash128> ret);

  /// @brief Method Rot64, addr 0x68fd5c4, size 0x14, virtual false, abstract: false, final false
  static inline void Rot64(::ByRef<uint64_t> x, int32_t k);

  /// @brief Method ShortEnd, addr 0x68fd430, size 0x194, virtual false, abstract: false, final false
  static inline void ShortEnd(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3);

  /// @brief Method ShortHash4, addr 0x68fd244, size 0x68, virtual false, abstract: false, final false
  inline void ShortHash4(uint32_t data);

  /// @brief Method ToString, addr 0x68fcee4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x68fce18, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(uint32_t u32_0, uint32_t u32_1, uint32_t u32_2, uint32_t u32_3);

  /// @brief Method .ctor, addr 0x68fce30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint64_t u64_0, uint64_t u64_1);

  /// @brief Method get_isValid, addr 0x68fce38, size 0x20, virtual false, abstract: false, final false
  inline bool get_isValid();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Hash128>"
  constexpr ::System::IComparable_1<::UnityEngine::Hash128>* i___System__IComparable_1___UnityEngine__Hash128_();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Hash128>"
  constexpr ::System::IEquatable_1<::UnityEngine::Hash128>* i___System__IEquatable_1___UnityEngine__Hash128_();

  /// @brief Method op_Equality, addr 0x68fd32c, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2);

  /// @brief Method op_GreaterThan, addr 0x68fcebc, size 0x28, virtual false, abstract: false, final false
  static inline bool op_GreaterThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  /// @brief Method op_Inequality, addr 0x68fd420, size 0x10, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Hash128 hash1, ::UnityEngine::Hash128 hash2);

  /// @brief Method op_LessThan, addr 0x68fcea4, size 0x18, virtual false, abstract: false, final false
  static inline bool op_LessThan(::UnityEngine::Hash128 x, ::UnityEngine::Hash128 y);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Hash128();

  // Ctor Parameters [CppParam { name: "u64_0", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "u64_1", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr Hash128(uint64_t u64_0, uint64_t u64_1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10213 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field kConst offset 0xffffffff size 0x8
  static constexpr uint64_t kConst{ static_cast<uint64_t>(0xdeadbeefdeadbeefu) };

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

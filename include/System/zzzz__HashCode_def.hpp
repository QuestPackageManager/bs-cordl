#pragma once
// IWYU pragma private; include "System/HashCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HashCode)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
struct HashCode;
}
// Write type traits
MARK_VAL_T(::System::HashCode);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.HashCode
struct CORDL_TYPE HashCode {
public:
  // Declarations
  /// @brief Field s_seed, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_seed, put = setStaticF_s_seed)) uint32_t s_seed;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void Add(T value);

  /// @brief Method Add, addr 0x3de2628, size 0x298, virtual false, abstract: false, final false
  inline void Add(int32_t value);

  /// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4> static inline int32_t Combine(T1 value1, T2 value2, T3 value3, T4 value4);

  /// @brief Method Combine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
  static inline int32_t Combine(T1 value1, T2 value2, T3 value3, T4 value4, T5 value5, T6 value6, T7 value7);

  /// @brief Method Equals, addr 0x3de2b64, size 0x48, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GenerateGlobalSeed, addr 0x3de2320, size 0x24, virtual false, abstract: false, final false
  static inline uint32_t GenerateGlobalSeed();

  /// @brief Method GetHashCode, addr 0x3de2af8, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initialize, addr 0x3de2350, size 0xb8, virtual false, abstract: false, final false
  static inline void Initialize(::ByRef<uint32_t> v1, ::ByRef<uint32_t> v2, ::ByRef<uint32_t> v3, ::ByRef<uint32_t> v4);

  /// @brief Method MixEmptyState, addr 0x3de259c, size 0x64, virtual false, abstract: false, final false
  static inline uint32_t MixEmptyState();

  /// @brief Method MixFinal, addr 0x3de2600, size 0x28, virtual false, abstract: false, final false
  static inline uint32_t MixFinal(uint32_t hash);

  /// @brief Method MixState, addr 0x3de24f8, size 0xa4, virtual false, abstract: false, final false
  static inline uint32_t MixState(uint32_t v1, uint32_t v2, uint32_t v3, uint32_t v4);

  /// @brief Method QueueRound, addr 0x3de2480, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t QueueRound(uint32_t hash, uint32_t queuedValue);

  /// @brief Method Rol, addr 0x3de2344, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Rol(uint32_t value, int32_t count);

  /// @brief Method Round, addr 0x3de2408, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t Round(uint32_t hash, uint32_t input);

  /// @brief Method ToHashCode, addr 0x3de28c0, size 0x238, virtual false, abstract: false, final false
  inline int32_t ToHashCode();

  static inline uint32_t getStaticF_s_seed();

  static inline void setStaticF_s_seed(uint32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HashCode();

  // Ctor Parameters [CppParam { name: "_v1", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v3", ty:
  // "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_v4", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue1", ty: "uint32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_queue2", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_queue3", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty:
  // "uint32_t", modifiers: "", def_value: None }]
  constexpr HashCode(uint32_t _v1, uint32_t _v2, uint32_t _v3, uint32_t _v4, uint32_t _queue1, uint32_t _queue2, uint32_t _queue3, uint32_t _length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2409 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field _v1, offset: 0x0, size: 0x4, def value: None
  uint32_t _v1;

  /// @brief Field _v2, offset: 0x4, size: 0x4, def value: None
  uint32_t _v2;

  /// @brief Field _v3, offset: 0x8, size: 0x4, def value: None
  uint32_t _v3;

  /// @brief Field _v4, offset: 0xc, size: 0x4, def value: None
  uint32_t _v4;

  /// @brief Field _queue1, offset: 0x10, size: 0x4, def value: None
  uint32_t _queue1;

  /// @brief Field _queue2, offset: 0x14, size: 0x4, def value: None
  uint32_t _queue2;

  /// @brief Field _queue3, offset: 0x18, size: 0x4, def value: None
  uint32_t _queue3;

  /// @brief Field _length, offset: 0x1c, size: 0x4, def value: None
  uint32_t _length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::HashCode, _v1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _v2) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _v3) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _v4) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _queue1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _queue2) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _queue3) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::HashCode, _length) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::HashCode, 0x20>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::HashCode, "System", "HashCode");

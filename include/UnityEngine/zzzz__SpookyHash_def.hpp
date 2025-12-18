#pragma once
// IWYU pragma private; include "UnityEngine/SpookyHash.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpookyHash)
namespace UnityEngine {
struct SpookyHash_U;
}
// Forward declare root types
namespace UnityEngine {
class SpookyHash;
}
namespace UnityEngine {
struct SpookyHash_U;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SpookyHash);
MARK_VAL_T(::UnityEngine::SpookyHash_U);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.SpookyHash/U
struct CORDL_TYPE SpookyHash_U {
public:
  // Declarations
  /// @brief Field i, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) uint64_t i;

  /// @brief Field p32, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_p32, put = __cordl_internal_set_p32)) uint32_t* p32;

  /// @brief Field p64, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_p64, put = __cordl_internal_set_p64)) uint64_t* p64;

  /// @brief Field p8, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_p8, put = __cordl_internal_set_p8)) uint8_t* p8;

  constexpr uint64_t const& __cordl_internal_get_i() const;

  constexpr uint64_t& __cordl_internal_get_i();

  constexpr uint32_t* const& __cordl_internal_get_p32() const;

  constexpr uint32_t*& __cordl_internal_get_p32();

  constexpr uint64_t* const& __cordl_internal_get_p64() const;

  constexpr uint64_t*& __cordl_internal_get_p64();

  constexpr uint8_t* const& __cordl_internal_get_p8() const;

  constexpr uint8_t*& __cordl_internal_get_p8();

  constexpr void __cordl_internal_set_i(uint64_t value);

  constexpr void __cordl_internal_set_p32(uint32_t* value);

  constexpr void __cordl_internal_set_p64(uint64_t* value);

  constexpr void __cordl_internal_set_p8(uint8_t* value);

  /// @brief Method .ctor, addr 0x68fdddc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint16_t* p8);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SpookyHash_U();

  // Ctor Parameters [CppParam { name: "p8", ty: "uint8_t*", modifiers: "", def_value: None }, CppParam { name: "p32", ty: "uint32_t*", modifiers: "", def_value: None }, CppParam { name: "p64", ty:
  // "uint64_t*", modifiers: "", def_value: None }, CppParam { name: "i", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr SpookyHash_U(uint8_t* p8, uint32_t* p32, uint64_t* p64, uint64_t i) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___p8_padding[0x0];
      /// @brief Field p8, offset: 0x0, size: 0x8, def value: None
      uint8_t* ___p8;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___p8_padding_forAlignment[0x0];
      /// @brief Field p8, offset: 0x0, size: 0x8, def value: None
      uint8_t* ___p8_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___p32_padding[0x0];
      /// @brief Field p32, offset: 0x0, size: 0x8, def value: None
      uint32_t* ___p32;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___p32_padding_forAlignment[0x0];
      /// @brief Field p32, offset: 0x0, size: 0x8, def value: None
      uint32_t* ___p32_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___p64_padding[0x0];
      /// @brief Field p64, offset: 0x0, size: 0x8, def value: None
      uint64_t* ___p64;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___p64_padding_forAlignment[0x0];
      /// @brief Field p64, offset: 0x0, size: 0x8, def value: None
      uint64_t* ___p64_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___i_padding[0x0];
      /// @brief Field i, offset: 0x0, size: 0x8, def value: None
      uint64_t ___i;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___i_padding_forAlignment[0x0];
      /// @brief Field i, offset: 0x0, size: 0x8, def value: None
      uint64_t ___i_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpookyHash_U, 0x8>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SpookyHash
class CORDL_TYPE SpookyHash : public ::System::Object {
public:
  // Declarations
  using U = ::UnityEngine::SpookyHash_U;

  /// @brief Field AllowUnalignedRead, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_AllowUnalignedRead, put = setStaticF_AllowUnalignedRead)) bool AllowUnalignedRead;

  /// @brief Method AttemptDetectAllowUnalignedRead, addr 0x68fda10, size 0x84, virtual false, abstract: false, final false
  static inline bool AttemptDetectAllowUnalignedRead();

  /// @brief Method End, addr 0x68fe2c4, size 0x258, virtual false, abstract: false, final false
  static inline void End(uint64_t* data, ::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3, ::ByRef<uint64_t> h4, ::ByRef<uint64_t> h5, ::ByRef<uint64_t> h6,
                         ::ByRef<uint64_t> h7, ::ByRef<uint64_t> h8, ::ByRef<uint64_t> h9, ::ByRef<uint64_t> h10, ::ByRef<uint64_t> h11);

  /// @brief Method EndPartial, addr 0x68fe51c, size 0x290, virtual false, abstract: false, final false
  static inline void EndPartial(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3, ::ByRef<uint64_t> h4, ::ByRef<uint64_t> h5, ::ByRef<uint64_t> h6,
                                ::ByRef<uint64_t> h7, ::ByRef<uint64_t> h8, ::ByRef<uint64_t> h9, ::ByRef<uint64_t> h10, ::ByRef<uint64_t> h11);

  /// @brief Method Hash, addr 0x68fd6a0, size 0x370, virtual false, abstract: false, final false
  static inline void Hash(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2);

  /// @brief Method Mix, addr 0x68fdde4, size 0x444, virtual false, abstract: false, final false
  static inline void Mix(uint64_t* data, ::ByRef<uint64_t> s0, ::ByRef<uint64_t> s1, ::ByRef<uint64_t> s2, ::ByRef<uint64_t> s3, ::ByRef<uint64_t> s4, ::ByRef<uint64_t> s5, ::ByRef<uint64_t> s6,
                         ::ByRef<uint64_t> s7, ::ByRef<uint64_t> s8, ::ByRef<uint64_t> s9, ::ByRef<uint64_t> s10, ::ByRef<uint64_t> s11);

  /// @brief Method Rot64, addr 0x68fe7ac, size 0x14, virtual false, abstract: false, final false
  static inline void Rot64(::ByRef<uint64_t> x, int32_t k);

  /// @brief Method Short, addr 0x68fda94, size 0x348, virtual false, abstract: false, final false
  static inline void Short(void* message, uint64_t length, uint64_t* hash1, uint64_t* hash2);

  /// @brief Method ShortEnd, addr 0x68fe9e0, size 0x200, virtual false, abstract: false, final false
  static inline void ShortEnd(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3);

  /// @brief Method ShortMix, addr 0x68fe7c0, size 0x220, virtual false, abstract: false, final false
  static inline void ShortMix(::ByRef<uint64_t> h0, ::ByRef<uint64_t> h1, ::ByRef<uint64_t> h2, ::ByRef<uint64_t> h3);

  static inline bool getStaticF_AllowUnalignedRead();

  /// @brief Method memset, addr 0x68fe228, size 0x9c, virtual false, abstract: false, final false
  static inline void memset(void* dst, int32_t value, uint64_t numberOfBytes);

  static inline void setStaticF_AllowUnalignedRead(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SpookyHash();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SpookyHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SpookyHash(SpookyHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SpookyHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SpookyHash(SpookyHash const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10217 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SpookyHash, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SpookyHash);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpookyHash*, "UnityEngine", "SpookyHash");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SpookyHash_U, "UnityEngine", "SpookyHash/U");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA512_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA512Managed)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA512Managed;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA512Managed);
// Type: System.Security.Cryptography::SHA512Managed
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::SHA512Managed*
class CORDL_TYPE SHA512Managed : public ::System::Security::Cryptography::SHA512 {
public:
  // Declarations
  /// @brief Field _K, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__K, put = setStaticF__K))::ArrayW<uint64_t, ::Array<uint64_t>*> _K;

  /// @brief Field _W, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__W, put = __cordl_internal_set__W))::ArrayW<uint64_t, ::Array<uint64_t>*> _W;

  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _count, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) uint64_t _count;

  /// @brief Field _stateSHA512, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stateSHA512, put = __cordl_internal_set__stateSHA512))::ArrayW<uint64_t, ::Array<uint64_t>*> _stateSHA512;

  /// @brief Method Ch, addr 0x25c03cc, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);

  /// @brief Method HashCore, addr 0x25bf9ec, size 0x4, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x25bfbbc, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x25bf9a8, size 0x44, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeState, addr 0x25bf8a8, size 0x100, virtual false, abstract: false, final false
  inline void InitializeState();

  /// @brief Method Maj, addr 0x25c0438, size 0x14, virtual false, abstract: false, final false
  static inline uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);

  static inline ::System::Security::Cryptography::SHA512Managed* New_ctor();

  /// @brief Method RotateRight, addr 0x25c044c, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t RotateRight(uint64_t x, int32_t n);

  /// @brief Method SHA512Expand, addr 0x25c02c8, size 0xa8, virtual false, abstract: false, final false
  static inline void SHA512Expand(::cordl_internals::Ptr<uint64_t> x);

  /// @brief Method SHATransform, addr 0x25bfd64, size 0x564, virtual false, abstract: false, final false
  static inline void SHATransform(::cordl_internals::Ptr<uint64_t> expandedBuffer, ::cordl_internals::Ptr<uint64_t> state, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method Sigma_0, addr 0x25c03dc, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Sigma_0(uint64_t x);

  /// @brief Method Sigma_1, addr 0x25c0370, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t Sigma_1(uint64_t x);

  /// @brief Method _EndHash, addr 0x25bfbc0, size 0x1a4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _EndHash();

  /// @brief Method _HashData, addr 0x25bf9f0, size 0x1cc, virtual false, abstract: false, final false
  inline void _HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> partIn, int32_t ibStart, int32_t cbSize);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get__W() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get__W();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr uint64_t const& __cordl_internal_get__count() const;

  constexpr uint64_t& __cordl_internal_get__count();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get__stateSHA512() const;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get__stateSHA512();

  constexpr void __cordl_internal_set__W(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__count(uint64_t value);

  constexpr void __cordl_internal_set__stateSHA512(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method .ctor, addr 0x25bf7e0, size 0xc8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> getStaticF__K();

  static inline void setStaticF__K(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  /// @brief Method sigma_0, addr 0x25c0454, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t sigma_0(uint64_t x);

  /// @brief Method sigma_1, addr 0x25c04b0, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t sigma_1(uint64_t x);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA512Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SHA512Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA512Managed(SHA512Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA512Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA512Managed(SHA512Managed const&) = delete;

  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _count, offset: 0x30, size: 0x8, def value: None
  uint64_t ____count;

  /// @brief Field _stateSHA512, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ____stateSHA512;

  /// @brief Field _W, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ____W;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA512Managed, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA512Managed, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA512Managed, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA512Managed, ____stateSHA512) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA512Managed, ____W) == 0x40, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA512Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA512Managed*, "System.Security.Cryptography", "SHA512Managed");

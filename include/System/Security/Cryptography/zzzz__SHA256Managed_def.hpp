#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA256_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA256Managed)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA256Managed;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA256Managed);
// Type: System.Security.Cryptography::SHA256Managed
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2960))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2961))
// CS Name: ::System.Security.Cryptography::SHA256Managed*
class CORDL_TYPE SHA256Managed : public ::System::Security::Cryptography::SHA256 {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _count, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int64_t _count;

  /// @brief Field _stateSHA256, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stateSHA256, put = __cordl_internal_set__stateSHA256))::ArrayW<uint32_t, ::Array<uint32_t>*> _stateSHA256;

  /// @brief Field _W, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__W, put = __cordl_internal_set__W))::ArrayW<uint32_t, ::Array<uint32_t>*> _W;

  /// @brief Field _K, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__K, put = setStaticF__K))::ArrayW<uint32_t, ::Array<uint32_t>*> _K;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __cordl_internal_get__count();

  constexpr int64_t const& __cordl_internal_get__count() const;

  constexpr void __cordl_internal_set__count(int64_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__stateSHA256();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__stateSHA256() const;

  constexpr void __cordl_internal_set__stateSHA256(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__W();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__W() const;

  constexpr void __cordl_internal_set__W(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF__K(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF__K();

  static inline ::System::Security::Cryptography::SHA256Managed* New_ctor();

  /// @brief Method .ctor, addr 0x245ef54, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Initialize, addr 0x2467580, size 0x44, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method HashCore, addr 0x24675c4, size 0x4, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x2467794, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method InitializeState, addr 0x24674c0, size 0xc0, virtual false, abstract: false, final false
  inline void InitializeState();

  /// @brief Method _HashData, addr 0x24675c8, size 0x1cc, virtual false, abstract: false, final false
  inline void _HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> partIn, int32_t ibStart, int32_t cbSize);

  /// @brief Method _EndHash, addr 0x2467798, size 0x1a8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _EndHash();

  /// @brief Method SHATransform, addr 0x2467940, size 0x56c, virtual false, abstract: false, final false
  static inline void SHATransform(::cordl_internals::Ptr<uint32_t> expandedBuffer, ::cordl_internals::Ptr<uint32_t> state, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method RotateRight, addr 0x2468030, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t x, int32_t n);

  /// @brief Method Ch, addr 0x2467fb0, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t Ch(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method Maj, addr 0x246801c, size 0x14, virtual false, abstract: false, final false
  static inline uint32_t Maj(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method sigma_0, addr 0x2468038, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t sigma_0(uint32_t x);

  /// @brief Method sigma_1, addr 0x2468094, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t sigma_1(uint32_t x);

  /// @brief Method Sigma_0, addr 0x2467fc0, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Sigma_0(uint32_t x);

  /// @brief Method Sigma_1, addr 0x2467f54, size 0x5c, virtual false, abstract: false, final false
  static inline uint32_t Sigma_1(uint32_t x);

  /// @brief Method SHA256Expand, addr 0x2467eac, size 0xa8, virtual false, abstract: false, final false
  static inline void SHA256Expand(::cordl_internals::Ptr<uint32_t> x);

  // Ctor Parameters [CppParam { name: "", ty: "SHA256Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA256Managed(SHA256Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA256Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA256Managed(SHA256Managed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA256Managed();

public:
  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _count, offset: 0x30, size: 0x8, def value: None
  int64_t ____count;

  /// @brief Field _stateSHA256, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____stateSHA256;

  /// @brief Field _W, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____W;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA256Managed, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA256Managed, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA256Managed, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA256Managed, ____stateSHA256) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA256Managed, ____W) == 0x40, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA256Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA256Managed*, "System.Security.Cryptography", "SHA256Managed");

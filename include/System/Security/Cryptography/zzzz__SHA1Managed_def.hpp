#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA1Managed)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1Managed;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA1Managed);
// Type: System.Security.Cryptography::SHA1Managed
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2957))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2958))
// CS Name: ::System.Security.Cryptography::SHA1Managed*
class CORDL_TYPE SHA1Managed : public ::System::Security::Cryptography::SHA1 {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __get__buffer, put = __set__buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _count, offset 0x30, size 0x8
  __declspec(property(get = __get__count, put = __set__count)) int64_t _count;

  /// @brief Field _stateSHA1, offset 0x38, size 0x8
  __declspec(property(get = __get__stateSHA1, put = __set__stateSHA1))::ArrayW<uint32_t, ::Array<uint32_t>*> _stateSHA1;

  /// @brief Field _expandedBuffer, offset 0x40, size 0x8
  __declspec(property(get = __get__expandedBuffer, put = __set__expandedBuffer))::ArrayW<uint32_t, ::Array<uint32_t>*> _expandedBuffer;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__buffer() const;

  constexpr void __set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __get__count();

  constexpr int64_t const& __get__count() const;

  constexpr void __set__count(int64_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get__stateSHA1();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get__stateSHA1() const;

  constexpr void __set__stateSHA1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get__expandedBuffer();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get__expandedBuffer() const;

  constexpr void __set__expandedBuffer(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::System::Security::Cryptography::SHA1Managed* New_ctor();

  /// @brief Method .ctor addr 0x23056d4 size 0x124 virtual false final false
  inline void _ctor();

  /// @brief Method Initialize addr 0x230df8c size 0x44 virtual true final false
  inline void Initialize();

  /// @brief Method HashCore addr 0x230dfd0 size 0x4 virtual true final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal addr 0x230e150 size 0x4 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method InitializeState addr 0x230df08 size 0x84 virtual false final false
  inline void InitializeState();

  /// @brief Method _HashData addr 0x230dfd4 size 0x17c virtual false final false
  inline void _HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> partIn, int32_t ibStart, int32_t cbSize);

  /// @brief Method _EndHash addr 0x230e154 size 0x1a8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _EndHash();

  /// @brief Method SHATransform addr 0x230e2fc size 0x3f4 virtual false final false
  static inline void SHATransform(::cordl_internals::Ptr<uint32_t> expandedBuffer, ::cordl_internals::Ptr<uint32_t> state, ::cordl_internals::Ptr<uint8_t> block);

  /// @brief Method SHAExpand addr 0x230e6f0 size 0x3c virtual false final false
  static inline void SHAExpand(::cordl_internals::Ptr<uint32_t> x);

  // Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA1Managed(SHA1Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA1Managed(SHA1Managed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA1Managed();

public:
  /// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____buffer;

  /// @brief Field _count, offset: 0x30, size: 0x8, def value: None
  int64_t ____count;

  /// @brief Field _stateSHA1, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____stateSHA1;

  /// @brief Field _expandedBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____expandedBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA1Managed, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____stateSHA1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____expandedBuffer) == 0x40, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA1Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1Managed*, "System.Security.Cryptography", "SHA1Managed");

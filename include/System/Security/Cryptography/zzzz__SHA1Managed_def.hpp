#pragma once
// IWYU pragma private; include "System/Security/Cryptography/SHA1Managed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SHA1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SHA1Managed)
// Forward declare root types
namespace System::Security::Cryptography {
class SHA1Managed;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::SHA1Managed);
// Dependencies System.Security.Cryptography.SHA1
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.SHA1Managed
class CORDL_TYPE SHA1Managed : public ::System::Security::Cryptography::SHA1 {
public:
  // Declarations
  /// @brief Field _buffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__buffer, put = __cordl_internal_set__buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _buffer;

  /// @brief Field _count, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__count, put = __cordl_internal_set__count)) int64_t _count;

  /// @brief Field _expandedBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__expandedBuffer, put = __cordl_internal_set__expandedBuffer)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _expandedBuffer;

  /// @brief Field _stateSHA1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__stateSHA1, put = __cordl_internal_set__stateSHA1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _stateSHA1;

  /// @brief Method HashCore, addr 0x59538a4, size 0x4, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x5953a1c, size 0x4, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x5953860, size 0x44, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method InitializeState, addr 0x59537dc, size 0x84, virtual false, abstract: false, final false
  inline void InitializeState();

  static inline ::System::Security::Cryptography::SHA1Managed* New_ctor();

  /// @brief Method SHAExpand, addr 0x59540c0, size 0x3c, virtual false, abstract: false, final false
  static inline void SHAExpand(uint32_t* x);

  /// @brief Method SHATransform, addr 0x5953ba4, size 0x3dc, virtual false, abstract: false, final false
  static inline void SHATransform(uint32_t* expandedBuffer, uint32_t* state, uint8_t* block);

  /// @brief Method _EndHash, addr 0x5953a20, size 0x184, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> _EndHash();

  /// @brief Method _HashData, addr 0x59538a8, size 0x174, virtual false, abstract: false, final false
  inline void _HashData(::ArrayW<uint8_t, ::Array<uint8_t>*> partIn, int32_t ibStart, int32_t cbSize);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__buffer();

  constexpr int64_t const& __cordl_internal_get__count() const;

  constexpr int64_t& __cordl_internal_get__count();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__expandedBuffer() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__expandedBuffer();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__stateSHA1() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__stateSHA1();

  constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__count(int64_t value);

  constexpr void __cordl_internal_set__expandedBuffer(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__stateSHA1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x5953708, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SHA1Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SHA1Managed(SHA1Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SHA1Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SHA1Managed(SHA1Managed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2975 };

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
static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____stateSHA1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::SHA1Managed, ____expandedBuffer) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::SHA1Managed, 0x48>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::SHA1Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::SHA1Managed*, "System.Security.Cryptography", "SHA1Managed");

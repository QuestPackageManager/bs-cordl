#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RijndaelManagedTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CipherMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/Security/Cryptography/zzzz__PaddingMode_def.hpp"
#include "System/Security/Cryptography/zzzz__RijndaelManagedTransformMode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RijndaelManagedTransform)
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
struct PaddingMode;
}
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RijndaelManagedTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RijndaelManagedTransform);
// Dependencies System.IDisposable, System.Object, System.Security.Cryptography.CipherMode, System.Security.Cryptography.ICryptoTransform, System.Security.Cryptography.PaddingMode,
// System.Security.Cryptography.RijndaelManagedTransformMode
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RijndaelManagedTransform
class CORDL_TYPE RijndaelManagedTransform : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field m_IV, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IV, put = __cordl_internal_set_m_IV)) ::ArrayW<int32_t, ::Array<int32_t>*> m_IV;

  /// @brief Field m_Nb, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Nb, put = __cordl_internal_set_m_Nb)) int32_t m_Nb;

  /// @brief Field m_Nk, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Nk, put = __cordl_internal_set_m_Nk)) int32_t m_Nk;

  /// @brief Field m_Nr, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Nr, put = __cordl_internal_set_m_Nr)) int32_t m_Nr;

  /// @brief Field m_blockSizeBits, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_blockSizeBits, put = __cordl_internal_set_m_blockSizeBits)) int32_t m_blockSizeBits;

  /// @brief Field m_blockSizeBytes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_blockSizeBytes, put = __cordl_internal_set_m_blockSizeBytes)) int32_t m_blockSizeBytes;

  /// @brief Field m_cipherMode, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_cipherMode, put = __cordl_internal_set_m_cipherMode)) ::System::Security::Cryptography::CipherMode m_cipherMode;

  /// @brief Field m_decryptKeyExpansion, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_decryptKeyExpansion, put = __cordl_internal_set_m_decryptKeyExpansion)) ::ArrayW<int32_t, ::Array<int32_t>*> m_decryptKeyExpansion;

  /// @brief Field m_decryptindex, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_decryptindex, put = __cordl_internal_set_m_decryptindex)) ::ArrayW<int32_t, ::Array<int32_t>*> m_decryptindex;

  /// @brief Field m_depadBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_depadBuffer, put = __cordl_internal_set_m_depadBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_depadBuffer;

  /// @brief Field m_encryptKeyExpansion, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encryptKeyExpansion, put = __cordl_internal_set_m_encryptKeyExpansion)) ::ArrayW<int32_t, ::Array<int32_t>*> m_encryptKeyExpansion;

  /// @brief Field m_encryptindex, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_encryptindex, put = __cordl_internal_set_m_encryptindex)) ::ArrayW<int32_t, ::Array<int32_t>*> m_encryptindex;

  /// @brief Field m_inputBlockSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_inputBlockSize, put = __cordl_internal_set_m_inputBlockSize)) int32_t m_inputBlockSize;

  /// @brief Field m_lastBlockBuffer, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_lastBlockBuffer, put = __cordl_internal_set_m_lastBlockBuffer)) ::ArrayW<int32_t, ::Array<int32_t>*> m_lastBlockBuffer;

  /// @brief Field m_outputBlockSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_outputBlockSize, put = __cordl_internal_set_m_outputBlockSize)) int32_t m_outputBlockSize;

  /// @brief Field m_paddingValue, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_paddingValue, put = __cordl_internal_set_m_paddingValue)) ::System::Security::Cryptography::PaddingMode m_paddingValue;

  /// @brief Field m_shiftRegister, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_shiftRegister, put = __cordl_internal_set_m_shiftRegister)) ::ArrayW<uint8_t, ::Array<uint8_t>*> m_shiftRegister;

  /// @brief Field m_transformMode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_transformMode, put = __cordl_internal_set_m_transformMode)) ::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode;

  /// @brief Field s_Rcon, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Rcon, put = setStaticF_s_Rcon)) ::ArrayW<int32_t, ::Array<int32_t>*> s_Rcon;

  /// @brief Field s_Sbox, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Sbox, put = setStaticF_s_Sbox)) ::ArrayW<uint8_t, ::Array<uint8_t>*> s_Sbox;

  /// @brief Field s_T, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_T, put = setStaticF_s_T)) ::ArrayW<int32_t, ::Array<int32_t>*> s_T;

  /// @brief Field s_TF, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_TF, put = setStaticF_s_TF)) ::ArrayW<int32_t, ::Array<int32_t>*> s_TF;

  /// @brief Field s_iT, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_iT, put = setStaticF_s_iT)) ::ArrayW<int32_t, ::Array<int32_t>*> s_iT;

  /// @brief Field s_iTF, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_iTF, put = setStaticF_s_iTF)) ::ArrayW<int32_t, ::Array<int32_t>*> s_iTF;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method Dec, addr 0x3ca7a20, size 0x1e8, virtual false, abstract: false, final false
  inline void Dec(::cordl_internals::Ptr<int32_t> decryptindex, ::cordl_internals::Ptr<int32_t> decryptKeyExpansion, ::cordl_internals::Ptr<int32_t> iT, ::cordl_internals::Ptr<int32_t> iTF,
                  ::cordl_internals::Ptr<int32_t> work, ::cordl_internals::Ptr<int32_t> temp);

  /// @brief Method DecryptData, addr 0x3ca6aa0, size 0xa80, virtual false, abstract: false, final false
  inline int32_t DecryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> outputBuffer,
                             int32_t outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);

  /// @brief Method Dispose, addr 0x3ca5b34, size 0x8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3ca5b3c, size 0xbc, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Enc, addr 0x3ca7854, size 0x1cc, virtual false, abstract: false, final false
  inline void Enc(::cordl_internals::Ptr<int32_t> encryptindex, ::cordl_internals::Ptr<int32_t> encryptKeyExpansion, ::cordl_internals::Ptr<int32_t> T, ::cordl_internals::Ptr<int32_t> TF,
                  ::cordl_internals::Ptr<int32_t> work, ::cordl_internals::Ptr<int32_t> temp);

  /// @brief Method EncryptData, addr 0x3ca5ed4, size 0xbcc, virtual false, abstract: false, final false
  inline int32_t EncryptData(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> outputBuffer,
                             int32_t outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, bool fLast);

  /// @brief Method GenerateKeyExpansion, addr 0x3ca55cc, size 0x568, virtual false, abstract: false, final false
  inline void GenerateKeyExpansion(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey);

  /// @brief Method MulX, addr 0x3ca7cd4, size 0x24, virtual false, abstract: false, final false
  static inline int32_t MulX(int32_t x);

  static inline ::System::Security::Cryptography::RijndaelManagedTransform* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::System::Security::Cryptography::CipherMode mode,
                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t blockSize, int32_t feedbackSize,
                                                                                     ::System::Security::Cryptography::PaddingMode PaddingValue,
                                                                                     ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode);

  /// @brief Method Reset, addr 0x3ca77ec, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method SubWord, addr 0x3ca7c10, size 0xc4, virtual false, abstract: false, final false
  static inline int32_t SubWord(int32_t a);

  /// @brief Method TransformBlock, addr 0x3ca5c10, size 0x2c4, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x3ca7520, size 0x2cc, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_IV() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_IV();

  constexpr int32_t const& __cordl_internal_get_m_Nb() const;

  constexpr int32_t& __cordl_internal_get_m_Nb();

  constexpr int32_t const& __cordl_internal_get_m_Nk() const;

  constexpr int32_t& __cordl_internal_get_m_Nk();

  constexpr int32_t const& __cordl_internal_get_m_Nr() const;

  constexpr int32_t& __cordl_internal_get_m_Nr();

  constexpr int32_t const& __cordl_internal_get_m_blockSizeBits() const;

  constexpr int32_t& __cordl_internal_get_m_blockSizeBits();

  constexpr int32_t const& __cordl_internal_get_m_blockSizeBytes() const;

  constexpr int32_t& __cordl_internal_get_m_blockSizeBytes();

  constexpr ::System::Security::Cryptography::CipherMode const& __cordl_internal_get_m_cipherMode() const;

  constexpr ::System::Security::Cryptography::CipherMode& __cordl_internal_get_m_cipherMode();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_decryptKeyExpansion() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_decryptKeyExpansion();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_decryptindex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_decryptindex();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_depadBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_depadBuffer();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_encryptKeyExpansion() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_encryptKeyExpansion();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_encryptindex() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_encryptindex();

  constexpr int32_t const& __cordl_internal_get_m_inputBlockSize() const;

  constexpr int32_t& __cordl_internal_get_m_inputBlockSize();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_lastBlockBuffer() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_lastBlockBuffer();

  constexpr int32_t const& __cordl_internal_get_m_outputBlockSize() const;

  constexpr int32_t& __cordl_internal_get_m_outputBlockSize();

  constexpr ::System::Security::Cryptography::PaddingMode const& __cordl_internal_get_m_paddingValue() const;

  constexpr ::System::Security::Cryptography::PaddingMode& __cordl_internal_get_m_paddingValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_m_shiftRegister() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_m_shiftRegister();

  constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode const& __cordl_internal_get_m_transformMode() const;

  constexpr ::System::Security::Cryptography::RijndaelManagedTransformMode& __cordl_internal_get_m_transformMode();

  constexpr void __cordl_internal_set_m_IV(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_Nb(int32_t value);

  constexpr void __cordl_internal_set_m_Nk(int32_t value);

  constexpr void __cordl_internal_set_m_Nr(int32_t value);

  constexpr void __cordl_internal_set_m_blockSizeBits(int32_t value);

  constexpr void __cordl_internal_set_m_blockSizeBytes(int32_t value);

  constexpr void __cordl_internal_set_m_cipherMode(::System::Security::Cryptography::CipherMode value);

  constexpr void __cordl_internal_set_m_decryptKeyExpansion(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_decryptindex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_depadBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_encryptKeyExpansion(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_encryptindex(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_inputBlockSize(int32_t value);

  constexpr void __cordl_internal_set_m_lastBlockBuffer(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_outputBlockSize(int32_t value);

  constexpr void __cordl_internal_set_m_paddingValue(::System::Security::Cryptography::PaddingMode value);

  constexpr void __cordl_internal_set_m_shiftRegister(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_m_transformMode(::System::Security::Cryptography::RijndaelManagedTransformMode value);

  /// @brief Method .ctor, addr 0x3ca4fd0, size 0x5fc, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbKey, ::System::Security::Cryptography::CipherMode mode, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbIV, int32_t blockSize, int32_t feedbackSize,
                    ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_Rcon();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_s_Sbox();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_T();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_TF();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_iT();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_s_iTF();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x3ca5c08, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_InputBlockSize, addr 0x3ca5bf8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x3ca5c00, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

  /// @brief Method rot1, addr 0x3ca7d00, size 0x8, virtual false, abstract: false, final false
  static inline int32_t rot1(int32_t val);

  /// @brief Method rot2, addr 0x3ca7cf8, size 0x8, virtual false, abstract: false, final false
  static inline int32_t rot2(int32_t val);

  /// @brief Method rot3, addr 0x3ca7c08, size 0x8, virtual false, abstract: false, final false
  static inline int32_t rot3(int32_t val);

  static inline void setStaticF_s_Rcon(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_Sbox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_s_T(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_TF(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_iT(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_s_iTF(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RijndaelManagedTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RijndaelManagedTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RijndaelManagedTransform(RijndaelManagedTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RijndaelManagedTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RijndaelManagedTransform(RijndaelManagedTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2951 };

  /// @brief Field m_cipherMode, offset: 0x10, size: 0x4, def value: None
  ::System::Security::Cryptography::CipherMode ___m_cipherMode;

  /// @brief Field m_paddingValue, offset: 0x14, size: 0x4, def value: None
  ::System::Security::Cryptography::PaddingMode ___m_paddingValue;

  /// @brief Field m_transformMode, offset: 0x18, size: 0x4, def value: None
  ::System::Security::Cryptography::RijndaelManagedTransformMode ___m_transformMode;

  /// @brief Field m_blockSizeBits, offset: 0x1c, size: 0x4, def value: None
  int32_t ___m_blockSizeBits;

  /// @brief Field m_blockSizeBytes, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_blockSizeBytes;

  /// @brief Field m_inputBlockSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_inputBlockSize;

  /// @brief Field m_outputBlockSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_outputBlockSize;

  /// @brief Field m_encryptKeyExpansion, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_encryptKeyExpansion;

  /// @brief Field m_decryptKeyExpansion, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_decryptKeyExpansion;

  /// @brief Field m_Nr, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_Nr;

  /// @brief Field m_Nb, offset: 0x44, size: 0x4, def value: None
  int32_t ___m_Nb;

  /// @brief Field m_Nk, offset: 0x48, size: 0x4, def value: None
  int32_t ___m_Nk;

  /// @brief Field m_encryptindex, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_encryptindex;

  /// @brief Field m_decryptindex, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_decryptindex;

  /// @brief Field m_IV, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_IV;

  /// @brief Field m_lastBlockBuffer, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_lastBlockBuffer;

  /// @brief Field m_depadBuffer, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_depadBuffer;

  /// @brief Field m_shiftRegister, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___m_shiftRegister;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_cipherMode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_paddingValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_transformMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_blockSizeBits) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_blockSizeBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_inputBlockSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_outputBlockSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_encryptKeyExpansion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_decryptKeyExpansion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_Nr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_Nb) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_Nk) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_encryptindex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_decryptindex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_IV) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_lastBlockBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_depadBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RijndaelManagedTransform, ___m_shiftRegister) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RijndaelManagedTransform, 0x80>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RijndaelManagedTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManagedTransform*, "System.Security.Cryptography", "RijndaelManagedTransform");

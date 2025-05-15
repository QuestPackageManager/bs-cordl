#pragma once
// IWYU pragma private; include "System/Security/Cryptography/HashAlgorithm.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithm)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HashAlgorithm);
// Dependencies System.IDisposable, System.Object, System.Security.Cryptography.ICryptoTransform
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.HashAlgorithm
class CORDL_TYPE HashAlgorithm : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  __declspec(property(get = get_Hash)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_HashSize)) int32_t HashSize;

  /// @brief Field HashSizeValue, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_HashSizeValue, put = __cordl_internal_set_HashSizeValue)) int32_t HashSizeValue;

  /// @brief Field HashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_HashValue, put = __cordl_internal_set_HashValue)) ::ArrayW<uint8_t, ::Array<uint8_t>*> HashValue;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  /// @brief Field State, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_State, put = __cordl_internal_set_State)) int32_t State;

  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Method CaptureHashCodeAndReinitialize, addr 0x3c9e274, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CaptureHashCodeAndReinitialize();

  /// @brief Method Clear, addr 0x3c9e6f0, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ComputeHash, addr 0x3c9e1d0, size 0xa4, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ComputeHash, addr 0x3c9e31c, size 0x160, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ComputeHash, addr 0x3c9e47c, size 0x208, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::System::IO::Stream* inputStream);

  /// @brief Method Create, addr 0x3c9e014, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* Create(::StringW hashName);

  /// @brief Method Dispose, addr 0x3c9e684, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x3c9e784, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method HashCore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::HashAlgorithm* New_ctor();

  /// @brief Method TransformBlock, addr 0x3c9e7ac, size 0x9c, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x3c9e98c, size 0x134, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method ValidateTransformBlock, addr 0x3c9e848, size 0x144, virtual false, abstract: false, final false
  inline void ValidateTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr int32_t const& __cordl_internal_get_HashSizeValue() const;

  constexpr int32_t& __cordl_internal_get_HashSizeValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_HashValue() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_HashValue();

  constexpr int32_t const& __cordl_internal_get_State() const;

  constexpr int32_t& __cordl_internal_get_State();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr void __cordl_internal_set_HashSizeValue(int32_t value);

  constexpr void __cordl_internal_set_HashValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_State(int32_t value);

  constexpr void __cordl_internal_set__disposed(bool value);

  /// @brief Method .ctor, addr 0x3c9e00c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x3c9e7a4, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method get_Hash, addr 0x3c9e09c, size 0xec, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method get_HashSize, addr 0x3c9e094, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_HashSize();

  /// @brief Method get_InputBlockSize, addr 0x3c9e794, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x3c9e79c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_OutputBlockSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithm();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashAlgorithm(HashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashAlgorithm(HashAlgorithm const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2915 };

  /// @brief Field _disposed, offset: 0x10, size: 0x1, def value: None
  bool ____disposed;

  /// @brief Field HashSizeValue, offset: 0x14, size: 0x4, def value: None
  int32_t ___HashSizeValue;

  /// @brief Field HashValue, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___HashValue;

  /// @brief Field State, offset: 0x20, size: 0x4, def value: None
  int32_t ___State;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashSizeValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___State) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HashAlgorithm, 0x28>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");

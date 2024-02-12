#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HashAlgorithm)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HashAlgorithm);
// Type: System.Security.Cryptography::HashAlgorithm
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2916))
// CS Name: ::System.Security.Cryptography::HashAlgorithm*
class CORDL_TYPE HashAlgorithm : public ::System::Object {
public:
  // Declarations
  /// @brief Field _disposed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed, put = __cordl_internal_set__disposed)) bool _disposed;

  /// @brief Field HashSizeValue, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_HashSizeValue, put = __cordl_internal_set_HashSizeValue)) int32_t HashSizeValue;

  /// @brief Field HashValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_HashValue, put = __cordl_internal_set_HashValue))::ArrayW<uint8_t, ::Array<uint8_t>*> HashValue;

  /// @brief Field State, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_State, put = __cordl_internal_set_State)) int32_t State;

  __declspec(property(get = get_HashSize)) int32_t HashSize;

  __declspec(property(get = get_Hash))::ArrayW<uint8_t, ::Array<uint8_t>*> Hash;

  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
  constexpr operator ::System::Security::Cryptography::ICryptoTransform*() noexcept;

  /// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
  constexpr ::System::Security::Cryptography::ICryptoTransform* i___System__Security__Cryptography__ICryptoTransform() noexcept;

  constexpr bool& __cordl_internal_get__disposed();

  constexpr bool const& __cordl_internal_get__disposed() const;

  constexpr void __cordl_internal_set__disposed(bool value);

  constexpr int32_t& __cordl_internal_get_HashSizeValue();

  constexpr int32_t const& __cordl_internal_get_HashSizeValue() const;

  constexpr void __cordl_internal_set_HashSizeValue(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_HashValue();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_HashValue() const;

  constexpr void __cordl_internal_set_HashValue(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_State();

  constexpr int32_t const& __cordl_internal_get_State() const;

  constexpr void __cordl_internal_set_State(int32_t value);

  static inline ::System::Security::Cryptography::HashAlgorithm* New_ctor();

  /// @brief Method .ctor, addr 0x247c150, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Create, addr 0x247c158, size 0x80, virtual false, abstract: false, final false
  static inline ::System::Security::Cryptography::HashAlgorithm* Create(::StringW hashName);

  /// @brief Method get_HashSize, addr 0x247c1d8, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_HashSize();

  /// @brief Method get_Hash, addr 0x247c1e0, size 0xf8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Hash();

  /// @brief Method ComputeHash, addr 0x247c320, size 0xb0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method ComputeHash, addr 0x247c478, size 0x178, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ComputeHash, addr 0x247c5f0, size 0x210, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ComputeHash(::System::IO::Stream* inputStream);

  /// @brief Method CaptureHashCodeAndReinitialize, addr 0x247c3d0, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CaptureHashCodeAndReinitialize();

  /// @brief Method Dispose, addr 0x247c800, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Clear, addr 0x247c86c, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x247c900, size 0x10, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method get_InputBlockSize, addr 0x247c910, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize, addr 0x247c918, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_OutputBlockSize();

  /// @brief Method get_CanTransformMultipleBlocks, addr 0x247c920, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method TransformBlock, addr 0x247c928, size 0x9c, virtual true, abstract: false, final true
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock, addr 0x247cb20, size 0x124, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method ValidateTransformBlock, addr 0x247c9c4, size 0x15c, virtual false, abstract: false, final false
  inline void ValidateTransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  /// @brief Method HashCore, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Initialize();

  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HashAlgorithm(HashAlgorithm&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HashAlgorithm", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HashAlgorithm(HashAlgorithm const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HashAlgorithm();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HashAlgorithm, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ____disposed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashSizeValue) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___HashValue) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::HashAlgorithm, ___State) == 0x20, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HashAlgorithm);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HashAlgorithm*, "System.Security.Cryptography", "HashAlgorithm");

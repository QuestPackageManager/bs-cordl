#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7624WrapEngine)
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::Dstu7624WrapEngine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(843))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Dstu7624WrapEngine*
class CORDL_TYPE Dstu7624WrapEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field param, offset 0x10, size 0x8
  __declspec(property(get = __get_param, put = __set_param))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* param;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine;

  /// @brief Field forWrapping, offset 0x20, size 0x1
  __declspec(property(get = __get_forWrapping, put = __set_forWrapping)) bool forWrapping;

  /// @brief Field blockSize, offset 0x24, size 0x4
  __declspec(property(get = __get_blockSize, put = __set_blockSize)) int32_t blockSize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __get_param() const;

  constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value);

  constexpr bool& __get_forWrapping();

  constexpr bool const& __get_forWrapping() const;

  constexpr void __set_forWrapping(bool value);

  constexpr int32_t& __get_blockSize();

  constexpr int32_t const& __get_blockSize() const;

  constexpr void __set_blockSize(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine* New_ctor(int32_t blockSizeBits);

  /// @brief Method .ctor, addr 0xecf03c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits);

  /// @brief Method get_AlgorithmName, addr 0xecf0cc, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xecf10c, size 0x11c, virtual true, abstract: false, final true
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Wrap, addr 0xecf228, size 0x7b4, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Unwrap, addr 0xecf9dc, size 0x890, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7624WrapEngine(Dstu7624WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7624WrapEngine(Dstu7624WrapEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7624WrapEngine();

public:
  /// @brief Field param, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___param;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* ___engine;

  /// @brief Field forWrapping, offset: 0x20, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field blockSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___blockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___param) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___forWrapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___blockSize) == 0x24, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Dstu7624WrapEngine");

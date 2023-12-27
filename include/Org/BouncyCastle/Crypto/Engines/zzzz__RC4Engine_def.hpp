#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC4Engine)
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC4Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC4Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC4Engine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(856))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC4Engine*
class CORDL_TYPE RC4Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field engineState, offset 0x10, size 0x8
  __declspec(property(get = __get_engineState, put = __set_engineState))::ArrayW<uint8_t, ::Array<uint8_t>*> engineState;

  /// @brief Field x, offset 0x18, size 0x4
  __declspec(property(get = __get_x, put = __set_x)) int32_t x;

  /// @brief Field y, offset 0x1c, size 0x4
  __declspec(property(get = __get_y, put = __set_y)) int32_t y;

  /// @brief Field workingKey, offset 0x20, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Field STATE_LENGTH, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_STATE_LENGTH, put = setStaticF_STATE_LENGTH)) int32_t STATE_LENGTH;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_engineState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_engineState() const;

  constexpr void __set_engineState(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_x();

  constexpr int32_t const& __get_x() const;

  constexpr void __set_x(int32_t value);

  constexpr int32_t& __get_y();

  constexpr int32_t const& __get_y() const;

  constexpr void __set_y(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_workingKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_STATE_LENGTH(int32_t value);

  static inline int32_t getStaticF_STATE_LENGTH();

  /// @brief Method Init addr 0xeda638 size 0x108 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName addr 0xeda8e8 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method ReturnByte addr 0xeda928 size 0xd4 virtual true final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method ProcessBytes addr 0xeda9fc size 0x1d4 virtual true final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xedabd0 size 0x8 virtual true final false
  inline void Reset();

  /// @brief Method SetKey addr 0xeda740 size 0x1a8 virtual false final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC4Engine* New_ctor();

  /// @brief Method .ctor addr 0xedac24 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC4Engine(RC4Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC4Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC4Engine(RC4Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC4Engine();

public:
  /// @brief Field engineState, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___engineState;

  /// @brief Field x, offset: 0x18, size: 0x4, def value: None
  int32_t ___x;

  /// @brief Field y, offset: 0x1c, size: 0x4, def value: None
  int32_t ___y;

  /// @brief Field workingKey, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC4Engine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC4Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC4Engine*, "Org.BouncyCastle.Crypto.Engines", "RC4Engine");

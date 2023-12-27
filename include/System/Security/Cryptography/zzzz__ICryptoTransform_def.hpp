#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ICryptoTransform)
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::ICryptoTransform);
// Type: System.Security.Cryptography::ICryptoTransform
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2941))
// CS Name: ::System.Security.Cryptography::ICryptoTransform*
class CORDL_TYPE ICryptoTransform {
public:
  // Declarations
  __declspec(property(get = get_InputBlockSize)) int32_t InputBlockSize;

  __declspec(property(get = get_OutputBlockSize)) int32_t OutputBlockSize;

  __declspec(property(get = get_CanTransformMultipleBlocks)) bool CanTransformMultipleBlocks;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method get_InputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_InputBlockSize();

  /// @brief Method get_OutputBlockSize addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_OutputBlockSize();

  /// @brief Method get_CanTransformMultipleBlocks addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_CanTransformMultipleBlocks();

  /// @brief Method TransformBlock addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t TransformBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount, ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuffer, int32_t outputOffset);

  /// @brief Method TransformFinalBlock addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TransformFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ICryptoTransform(ICryptoTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ICryptoTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICryptoTransform(ICryptoTransform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::ICryptoTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::ICryptoTransform*, "System.Security.Cryptography", "ICryptoTransform");

#pragma once
// IWYU pragma private; include "Oculus/Platform/IVoipPCMSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IVoipPCMSource)
// Forward declare root types
namespace Oculus::Platform {
class IVoipPCMSource;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::IVoipPCMSource);
// Type: Oculus.Platform::IVoipPCMSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::IVoipPCMSource*
class CORDL_TYPE IVoipPCMSource {
public:
  // Declarations
  /// @brief Method GetPCM, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t GetPCM(::ArrayW<float_t, ::Array<float_t>*> dest, int32_t length);

  /// @brief Method PeekSizeElements, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t PeekSizeElements();

  /// @brief Method SetSenderID, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetSenderID(uint64_t senderID);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "IVoipPCMSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVoipPCMSource(IVoipPCMSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVoipPCMSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVoipPCMSource(IVoipPCMSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::IVoipPCMSource);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IVoipPCMSource*, "Oculus.Platform", "IVoipPCMSource");

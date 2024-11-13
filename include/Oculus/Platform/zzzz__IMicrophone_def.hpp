#pragma once
// IWYU pragma private; include "Oculus/Platform/IMicrophone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IMicrophone)
// Forward declare root types
namespace Oculus::Platform {
class IMicrophone;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::IMicrophone);
// Type: Oculus.Platform::IMicrophone
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::IMicrophone*
class CORDL_TYPE IMicrophone {
public:
  // Declarations
  /// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Start();

  /// @brief Method Stop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Stop();

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> Update();

  // Ctor Parameters [CppParam { name: "", ty: "IMicrophone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMicrophone(IMicrophone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMicrophone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMicrophone(IMicrophone const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15293 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::IMicrophone);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::IMicrophone*, "Oculus.Platform", "IMicrophone");

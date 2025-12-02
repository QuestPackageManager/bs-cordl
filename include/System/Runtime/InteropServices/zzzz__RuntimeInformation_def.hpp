#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/RuntimeInformation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__Architecture_def.hpp"
#include "System/Runtime/InteropServices/zzzz__OSPlatform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RuntimeInformation)
namespace System::Runtime::InteropServices {
struct OSPlatform;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class RuntimeInformation;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::RuntimeInformation);
// Dependencies System.Object, System.Runtime.InteropServices.Architecture, System.Runtime.InteropServices.OSPlatform
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.RuntimeInformation
class CORDL_TYPE RuntimeInformation : public ::System::Object {
public:
  // Declarations
  /// @brief Field _osArchitecture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__osArchitecture, put = setStaticF__osArchitecture)) ::System::Runtime::InteropServices::Architecture _osArchitecture;

  /// @brief Field _osPlatform, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__osPlatform, put = setStaticF__osPlatform)) ::System::Runtime::InteropServices::OSPlatform _osPlatform;

  /// @brief Field _processArchitecture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__processArchitecture, put = setStaticF__processArchitecture)) ::System::Runtime::InteropServices::Architecture _processArchitecture;

  /// @brief Method GetOSName, addr 0x5956818, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW GetOSName();

  /// @brief Method GetRuntimeArchitecture, addr 0x5956808, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW GetRuntimeArchitecture();

  /// @brief Method IsOSPlatform, addr 0x5956828, size 0x94, virtual false, abstract: false, final false
  static inline bool IsOSPlatform(::System::Runtime::InteropServices::OSPlatform osPlatform);

  static inline ::System::Runtime::InteropServices::Architecture getStaticF__osArchitecture();

  static inline ::System::Runtime::InteropServices::OSPlatform getStaticF__osPlatform();

  static inline ::System::Runtime::InteropServices::Architecture getStaticF__processArchitecture();

  static inline void setStaticF__osArchitecture(::System::Runtime::InteropServices::Architecture value);

  static inline void setStaticF__osPlatform(::System::Runtime::InteropServices::OSPlatform value);

  static inline void setStaticF__processArchitecture(::System::Runtime::InteropServices::Architecture value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeInformation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInformation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeInformation(RuntimeInformation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeInformation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeInformation(RuntimeInformation const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3348 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::RuntimeInformation, 0x10>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::RuntimeInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::RuntimeInformation*, "System.Runtime.InteropServices", "RuntimeInformation");

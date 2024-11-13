#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusPlatformExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OculusPlatformExtensions)
namespace Oculus::Platform {
template <typename T> class Message_1;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class Request;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusPlatformExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusPlatformExtensions);
// Type: ::OculusPlatformExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusPlatformExtensions*
class CORDL_TYPE OculusPlatformExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetAwaiter, addr 0x22439b0, size 0x104, virtual false, abstract: false, final false
  static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message*> GetAwaiter(::Oculus::Platform::Request* oculusRequest);

  /// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<T>*> GetAwaiter(::Oculus::Platform::Request_1<T>* oculusRequest);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusPlatformExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusPlatformExtensions(OculusPlatformExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusPlatformExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusPlatformExtensions(OculusPlatformExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18224 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusPlatformExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusPlatformExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformExtensions*, "", "OculusPlatformExtensions");

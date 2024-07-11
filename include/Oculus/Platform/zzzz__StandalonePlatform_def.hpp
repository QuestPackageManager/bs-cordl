#pragma once
// IWYU pragma private; include "Oculus/Platform/StandalonePlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StandalonePlatform)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class __StandalonePlatform__UnityLogDelegate;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
class StandalonePlatform;
}
namespace Oculus::Platform {
class __StandalonePlatform__UnityLogDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::StandalonePlatform);
MARK_REF_PTR_T(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate);
// Type: ::UnityLogDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::StandalonePlatform::UnityLogDelegate*
class CORDL_TYPE __StandalonePlatform__UnityLogDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2b0b2b0, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr tag, ::System::IntPtr msg, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2b0b348, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2b0b29c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr tag, ::System::IntPtr msg);

  static inline ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2b0b1d8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __StandalonePlatform__UnityLogDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__StandalonePlatform__UnityLogDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __StandalonePlatform__UnityLogDelegate(__StandalonePlatform__UnityLogDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__StandalonePlatform__UnityLogDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __StandalonePlatform__UnityLogDelegate(__StandalonePlatform__UnityLogDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__StandalonePlatform__UnityLogDelegate, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::StandalonePlatform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::StandalonePlatform*
class CORDL_TYPE StandalonePlatform : public ::System::Object {
public:
  // Declarations
  using UnityLogDelegate = ::Oculus::Platform::__StandalonePlatform__UnityLogDelegate;

  /// @brief Method AsyncInitialize, addr 0x2b0a8a0, size 0xe4, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(uint64_t appID, ::StringW accessToken);

  /// @brief Method AsyncInitializeWithAccessTokenAndOptions, addr 0x2aff704, size 0x148, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*
  AsyncInitializeWithAccessTokenAndOptions(::StringW appId, ::StringW accessToken, ::System::Collections::Generic::Dictionary_2<::Oculus::Platform::InitConfigOptions, bool>* initConfigOptions);

  /// @brief Method InitializeInEditor, addr 0x2aff240, size 0x128, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeInEditor();

  static inline ::Oculus::Platform::StandalonePlatform* New_ctor();

  /// @brief Method .ctor, addr 0x2aff238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandalonePlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandalonePlatform(StandalonePlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandalonePlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandalonePlatform(StandalonePlatform const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::StandalonePlatform, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::StandalonePlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::StandalonePlatform*, "Oculus.Platform", "StandalonePlatform");
NEED_NO_BOX(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__StandalonePlatform__UnityLogDelegate*, "Oculus.Platform", "StandalonePlatform/UnityLogDelegate");

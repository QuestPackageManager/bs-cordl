#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WindowsPlatform)
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template <typename T> class Request_1;
}
namespace Oculus::Platform {
class __WindowsPlatform__UnityLogDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Oculus::Platform {
class WindowsPlatform;
}
namespace Oculus::Platform {
class __WindowsPlatform__UnityLogDelegate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::WindowsPlatform);
MARK_REF_PTR_T(::Oculus::Platform::__WindowsPlatform__UnityLogDelegate);
// Type: ::UnityLogDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13404))
// CS Name: ::WindowsPlatform::UnityLogDelegate*
class CORDL_TYPE __WindowsPlatform__UnityLogDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::Oculus::Platform::__WindowsPlatform__UnityLogDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x270254c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x2702610, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* tag, void* msg);

  /// @brief Method BeginInvoke, addr 0x2702624, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* tag, void* msg, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27026bc, size 0x100c, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__WindowsPlatform__UnityLogDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WindowsPlatform__UnityLogDelegate(__WindowsPlatform__UnityLogDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WindowsPlatform__UnityLogDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WindowsPlatform__UnityLogDelegate(__WindowsPlatform__UnityLogDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WindowsPlatform__UnityLogDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::__WindowsPlatform__UnityLogDelegate, 0x80>, "Size mismatch!");

} // namespace Oculus::Platform
// Type: Oculus.Platform::WindowsPlatform
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13405))
// CS Name: ::Oculus.Platform::WindowsPlatform*
class CORDL_TYPE WindowsPlatform : public ::System::Object {
public:
  // Declarations
  using UnityLogDelegate = ::Oculus::Platform::__WindowsPlatform__UnityLogDelegate;

  /// @brief Method CPPLogCallback, addr 0x270242c, size 0xd8, virtual false, abstract: false, final false
  inline void CPPLogCallback(void* tag, void* message);

  /// @brief Method getCallbackPointer, addr 0x2702504, size 0x48, virtual false, abstract: false, final false
  inline void* getCallbackPointer();

  /// @brief Method Initialize, addr 0x26f5918, size 0xf0, virtual false, abstract: false, final false
  inline bool Initialize(::StringW appId);

  /// @brief Method AsyncInitialize, addr 0x26f511c, size 0x140, virtual false, abstract: false, final false
  inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* AsyncInitialize(::StringW appId);

  static inline ::Oculus::Platform::WindowsPlatform* New_ctor();

  /// @brief Method .ctor, addr 0x26f5114, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "WindowsPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WindowsPlatform(WindowsPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WindowsPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WindowsPlatform(WindowsPlatform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WindowsPlatform();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::WindowsPlatform, 0x10>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::WindowsPlatform);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::WindowsPlatform*, "Oculus.Platform", "WindowsPlatform");
NEED_NO_BOX(::Oculus::Platform::__WindowsPlatform__UnityLogDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::__WindowsPlatform__UnityLogDelegate*, "Oculus.Platform", "WindowsPlatform/UnityLogDelegate");

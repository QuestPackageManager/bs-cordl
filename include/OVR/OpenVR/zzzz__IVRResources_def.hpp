#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRResources)
namespace OVR::OpenVR {
class __IVRResources___GetResourceFullPath;
}
namespace OVR::OpenVR {
class __IVRResources___LoadSharedResource;
}
namespace System::Text {
class StringBuilder;
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
namespace OVR::OpenVR {
class __IVRResources___GetResourceFullPath;
}
namespace OVR::OpenVR {
class __IVRResources___LoadSharedResource;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRResources___GetResourceFullPath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRResources___LoadSharedResource);
MARK_VAL_T(::OVR::OpenVR::IVRResources);
// Type: ::_LoadSharedResource
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRResources::_LoadSharedResource*
class CORDL_TYPE __IVRResources___LoadSharedResource : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2be2640, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2be26d8, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2be262c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen);

  static inline ::OVR::OpenVR::__IVRResources___LoadSharedResource* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2be2554, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRResources___LoadSharedResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRResources___LoadSharedResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRResources___LoadSharedResource(__IVRResources___LoadSharedResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRResources___LoadSharedResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRResources___LoadSharedResource(__IVRResources___LoadSharedResource const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRResources___LoadSharedResource, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetResourceFullPath
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::IVRResources::_GetResourceFullPath*
class CORDL_TYPE __IVRResources___GetResourceFullPath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2be27ec, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2be2894, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2be27d8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen);

  static inline ::OVR::OpenVR::__IVRResources___GetResourceFullPath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2be2700, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRResources___GetResourceFullPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__IVRResources___GetResourceFullPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRResources___GetResourceFullPath(__IVRResources___GetResourceFullPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRResources___GetResourceFullPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRResources___GetResourceFullPath(__IVRResources___GetResourceFullPath const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRResources___GetResourceFullPath, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRResources
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::IVRResources
struct CORDL_TYPE IVRResources {
public:
  // Declarations
  using _GetResourceFullPath = ::OVR::OpenVR::__IVRResources___GetResourceFullPath;

  using _LoadSharedResource = ::OVR::OpenVR::__IVRResources___LoadSharedResource;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRResources();

  // Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "::OVR::OpenVR::__IVRResources___LoadSharedResource*", modifiers: "", def_value: None }, CppParam { name: "GetResourceFullPath", ty:
  // "::OVR::OpenVR::__IVRResources___GetResourceFullPath*", modifiers: "", def_value: None }]
  constexpr IVRResources(::OVR::OpenVR::__IVRResources___LoadSharedResource* LoadSharedResource, ::OVR::OpenVR::__IVRResources___GetResourceFullPath* GetResourceFullPath) noexcept;

  /// @brief Field LoadSharedResource, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRResources___LoadSharedResource* LoadSharedResource;

  /// @brief Field GetResourceFullPath, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRResources___GetResourceFullPath* GetResourceFullPath;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRResources, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRResources, LoadSharedResource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRResources, GetResourceFullPath) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRResources___GetResourceFullPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRResources___GetResourceFullPath*, "OVR.OpenVR", "IVRResources/_GetResourceFullPath");
NEED_NO_BOX(::OVR::OpenVR::__IVRResources___LoadSharedResource);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRResources___LoadSharedResource*, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRResources, "OVR.OpenVR", "IVRResources");

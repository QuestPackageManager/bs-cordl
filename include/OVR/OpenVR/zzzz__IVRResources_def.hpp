#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRResources)
namespace OVR::OpenVR {
class IVRResources__GetResourceFullPath;
}
namespace OVR::OpenVR {
class IVRResources__LoadSharedResource;
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
class IVRResources__GetResourceFullPath;
}
namespace OVR::OpenVR {
class IVRResources__LoadSharedResource;
}
namespace OVR::OpenVR {
struct IVRResources;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::IVRResources__GetResourceFullPath*);
MARK_REF_T(::OVR::OpenVR::IVRResources__LoadSharedResource*);
MARK_VAL_T(::OVR::OpenVR::IVRResources);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRResources__GetResourceFullPath*, "OVR.OpenVR", "IVRResources/_GetResourceFullPath");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRResources__LoadSharedResource*, "OVR.OpenVR", "IVRResources/_LoadSharedResource");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRResources, "OVR.OpenVR", "IVRResources");
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRResources/_LoadSharedResource
class CORDL_TYPE IVRResources__LoadSharedResource : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3e02c, size 0x5c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3e088, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3e018, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchResourceName, ::StringW pchBuffer, uint32_t unBufferLen);

  static inline ::OVR::OpenVR::IVRResources__LoadSharedResource* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3df98, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRResources__LoadSharedResource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRResources__LoadSharedResource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRResources__LoadSharedResource(IVRResources__LoadSharedResource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRResources__LoadSharedResource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRResources__LoadSharedResource(IVRResources__LoadSharedResource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8304 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRResources__LoadSharedResource) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRResources/_GetResourceFullPath
class CORDL_TYPE IVRResources__GetResourceFullPath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3e140, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3e1a0, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3e12c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchResourceName, ::StringW pchResourceTypeDirectory, ::System::Text::StringBuilder* pchPathBuffer, uint32_t unBufferLen);

  static inline ::OVR::OpenVR::IVRResources__GetResourceFullPath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3e0ac, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRResources__GetResourceFullPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRResources__GetResourceFullPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRResources__GetResourceFullPath(IVRResources__GetResourceFullPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRResources__GetResourceFullPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRResources__GetResourceFullPath(IVRResources__GetResourceFullPath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRResources__GetResourceFullPath) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRResources
struct CORDL_TYPE IVRResources {
public:
  // Declarations
  using _GetResourceFullPath = ::OVR::OpenVR::IVRResources__GetResourceFullPath;

  using _LoadSharedResource = ::OVR::OpenVR::IVRResources__LoadSharedResource;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRResources();

  // Ctor Parameters [CppParam { name: "LoadSharedResource", ty: "::OVR::OpenVR::IVRResources__LoadSharedResource*", modifiers: "", def_value: None }, CppParam { name: "GetResourceFullPath", ty:
  // "::OVR::OpenVR::IVRResources__GetResourceFullPath*", modifiers: "", def_value: None }]
  constexpr IVRResources(::OVR::OpenVR::IVRResources__LoadSharedResource* LoadSharedResource, ::OVR::OpenVR::IVRResources__GetResourceFullPath* GetResourceFullPath) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8306 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field LoadSharedResource, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRResources__LoadSharedResource* LoadSharedResource;

  /// @brief Field GetResourceFullPath, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRResources__GetResourceFullPath* GetResourceFullPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRResources, LoadSharedResource) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRResources, GetResourceFullPath) == 0x8, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::IVRResources) == 0x10, "Size mismatch!");

} // namespace OVR::OpenVR

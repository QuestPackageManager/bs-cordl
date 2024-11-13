#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/SDKBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKBridge)
namespace LIV::SDK::Unity {
struct SDKApplicationOutput;
}
namespace LIV::SDK::Unity {
struct SDKInputFrame;
}
namespace LIV::SDK::Unity {
struct SDKOutputFrame;
}
namespace LIV::SDK::Unity {
struct SDKPlane;
}
namespace LIV::SDK::Unity {
struct SDKResolution;
}
namespace LIV::SDK::Unity {
struct SDKTexture;
}
namespace LIV::SDK::Unity {
template <typename T> struct __SDKBridge__SDKInjection_1;
}
namespace System {
class Action;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class SDKBridge;
}
namespace LIV::SDK::Unity {
template <typename T> struct __SDKBridge__SDKInjection_1;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::SDKBridge);
MARK_GEN_VAL_T(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1);
// Type: ::SDKInjection`1
// SizeInfo { instance_size: 24, native_size: 40, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// cpp template
template <typename T>
// Is value type: true
// CS Name: ::SDKBridge::SDKInjection`1<T>
struct CORDL_TYPE __SDKBridge__SDKInjection_1 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SDKBridge__SDKInjection_1();

  // Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: None }, CppParam { name:
  // "data", ty: "T", modifiers: "", def_value: None }]
  constexpr __SDKBridge__SDKInjection_1(bool active, ::System::Action* action, T data) noexcept;

  /// @brief Field active, offset: 0x0, size: 0x1, def value: None
  bool active;

  /// @brief Field action, offset: 0x8, size: 0x8, def value: None
  ::System::Action* action;

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  T data;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17259 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace LIV::SDK::Unity
// Type: LIV.SDK.Unity::SDKBridge
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: false
// CS Name: ::LIV.SDK.Unity::SDKBridge*
class CORDL_TYPE SDKBridge : public ::System::Object {
public:
  // Declarations
  template <typename T> using SDKInjection_1 = ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<T>;

  /// @brief Field _injection_DisableAddTexture, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableAddTexture, put = setStaticF__injection_DisableAddTexture)) bool _injection_DisableAddTexture;

  /// @brief Field _injection_DisableCreateFrame, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableCreateFrame, put = setStaticF__injection_DisableCreateFrame)) bool _injection_DisableCreateFrame;

  /// @brief Field _injection_DisableSubmit, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableSubmit, put = setStaticF__injection_DisableSubmit)) bool _injection_DisableSubmit;

  /// @brief Field _injection_DisableSubmitApplicationOutput, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF__injection_DisableSubmitApplicationOutput, put = setStaticF__injection_DisableSubmitApplicationOutput)) bool _injection_DisableSubmitApplicationOutput;

  /// @brief Field _injection_IsActive, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF__injection_IsActive, put = setStaticF__injection_IsActive)) ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> _injection_IsActive;

  /// @brief Field _injection_SDKInputFrame, offset 0xffffffff, size 0x168
  static __declspec(property(get = getStaticF__injection_SDKInputFrame, put = setStaticF__injection_SDKInputFrame)) ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>
      _injection_SDKInputFrame;

  /// @brief Field _injection_SDKResolution, offset 0xffffffff, size 0x18
  static __declspec(property(get = getStaticF__injection_SDKResolution, put = setStaticF__injection_SDKResolution)) ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution>
      _injection_SDKResolution;

  /// @brief Method AddObjectToChannel, addr 0x3a6b32c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t AddObjectToChannel(int32_t slot, ::System::IntPtr obj, int32_t objectsize, uint64_t tag);

  /// @brief Method AddObjectToCompositorChannel, addr 0x3a6b304, size 0x8, virtual false, abstract: false, final false
  static inline int32_t AddObjectToCompositorChannel(int32_t slot, ::System::IntPtr obj, int32_t objectsize, uint64_t tag);

  /// @brief Method AddObjectToFrame, addr 0x3a6b30c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t AddObjectToFrame(::System::IntPtr obj, int32_t objectsize, uint64_t tag);

  /// @brief Method AddString, addr 0x3a6b3b8, size 0xfc, virtual false, abstract: false, final false
  static inline void AddString(::StringW tag, ::StringW value, int32_t slot);

  /// @brief Method AddStringToChannel, addr 0x3a6b2cc, size 0x8, virtual false, abstract: false, final false
  static inline int32_t AddStringToChannel(int32_t slot, ::System::IntPtr str, int32_t length, uint64_t tag);

  /// @brief Method AddStructToFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AddStructToFrame(ByRef<T> mystruct, uint64_t tag);

  /// @brief Method AddStructToGlobalChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t AddStructToGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method AddStructToLocalChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t AddStructToLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method AddTexture, addr 0x3a6bbdc, size 0x130, virtual false, abstract: false, final false
  static inline void AddTexture(::LIV::SDK::Unity::SDKTexture texture);

  /// @brief Method AddTexture, addr 0x3a6b4b4, size 0xc4, virtual false, abstract: false, final false
  static inline void AddTexture(::LIV::SDK::Unity::SDKTexture texture, uint64_t tag);

  /// @brief Method CreateFrame, addr 0x3a6bd0c, size 0x160, virtual false, abstract: false, final false
  static inline void CreateFrame(::LIV::SDK::Unity::SDKOutputFrame frame);

  /// @brief Method GetChannelObject, addr 0x3a6b324, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp);

  /// @brief Method GetCompositorChannelObject, addr 0x3a6b2fc, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp);

  /// @brief Method GetCurrentTime, addr 0x3a6b5d4, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t GetCurrentTime();

  /// @brief Method GetCurrentTimeTicks, addr 0x3a6b2e4, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetCurrentTimeTicks();

  /// @brief Method GetIsCaptureActive, addr 0x3a6b2ec, size 0x8, virtual false, abstract: false, final false
  static inline bool GetIsCaptureActive();

  /// @brief Method GetObjectTime, addr 0x3a6b578, size 0x5c, virtual false, abstract: false, final false
  static inline uint64_t GetObjectTime(::System::IntPtr objectptr);

  /// @brief Method GetObjectTimeStamp, addr 0x3a6b2dc, size 0x8, virtual false, abstract: false, final false
  static inline uint64_t GetObjectTimeStamp(::System::IntPtr obj);

  /// @brief Method GetRenderEventFunc, addr 0x3a6b2f4, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetRenderEventFunc();

  /// @brief Method GetResolution, addr 0x3a6bf0c, size 0x130, virtual false, abstract: false, final false
  static inline bool GetResolution(ByRef<::LIV::SDK::Unity::SDKResolution> sdkResolution);

  /// @brief Method GetStructFromGlobalChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool GetStructFromGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method GetStructFromLocalChannel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool GetStructFromLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag);

  /// @brief Method GetViewfinderTexture, addr 0x3a6ba5c, size 0x16c, virtual false, abstract: false, final false
  static inline ::LIV::SDK::Unity::SDKTexture GetViewfinderTexture();

  /// @brief Method GetViewportTexture, addr 0x3a6b31c, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetViewportTexture();

  /// @brief Method IssuePluginEvent, addr 0x3a6b630, size 0x80, virtual false, abstract: false, final false
  static inline void IssuePluginEvent();

  /// @brief Method SetGroundPlane, addr 0x3a6be6c, size 0xa0, virtual false, abstract: false, final false
  static inline void SetGroundPlane(::LIV::SDK::Unity::SDKPlane groundPlane);

  /// @brief Method SubmitApplicationOutput, addr 0x3a6adc8, size 0x1d0, virtual false, abstract: false, final false
  static inline void SubmitApplicationOutput(::LIV::SDK::Unity::SDKApplicationOutput applicationOutput);

  /// @brief Method Tag, addr 0x3a6b334, size 0x84, virtual false, abstract: false, final false
  static inline uint64_t Tag(::StringW str);

  /// @brief Method UpdateInputFrame, addr 0x3a6b6b0, size 0x270, virtual false, abstract: false, final false
  static inline bool UpdateInputFrame(ByRef<::LIV::SDK::Unity::SDKInputFrame> setframe);

  /// @brief Method addtexture, addr 0x3a6b2d4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t addtexture(::System::IntPtr sourcetexture, uint64_t tag);

  static inline bool getStaticF__injection_DisableAddTexture();

  static inline bool getStaticF__injection_DisableCreateFrame();

  static inline bool getStaticF__injection_DisableSubmit();

  static inline bool getStaticF__injection_DisableSubmitApplicationOutput();

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> getStaticF__injection_IsActive();

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> getStaticF__injection_SDKInputFrame();

  static inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> getStaticF__injection_SDKResolution();

  /// @brief Method get_IsActive, addr 0x3a6a5b4, size 0x98, virtual false, abstract: false, final false
  static inline bool get_IsActive();

  static inline void setStaticF__injection_DisableAddTexture(bool value);

  static inline void setStaticF__injection_DisableCreateFrame(bool value);

  static inline void setStaticF__injection_DisableSubmit(bool value);

  static inline void setStaticF__injection_DisableSubmitApplicationOutput(bool value);

  static inline void setStaticF__injection_IsActive(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> value);

  static inline void setStaticF__injection_SDKInputFrame(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> value);

  static inline void setStaticF__injection_SDKResolution(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> value);

  /// @brief Method updatinputframe, addr 0x3a6b314, size 0x8, virtual false, abstract: false, final false
  static inline ::System::IntPtr updatinputframe(::System::IntPtr InputFrame);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SDKBridge(SDKBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SDKBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SDKBridge(SDKBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKBridge, 0x10>, "Size mismatch!");

} // namespace LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::SDKBridge);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKBridge*, "LIV.SDK.Unity", "SDKBridge");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1, "LIV.SDK.Unity", "SDKBridge/SDKInjection`1");

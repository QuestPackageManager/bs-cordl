#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRDriverManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRDriverManager)
namespace OVR::OpenVR {
class IVRDriverManager__GetDriverCount;
}
namespace OVR::OpenVR {
class IVRDriverManager__GetDriverHandle;
}
namespace OVR::OpenVR {
class IVRDriverManager__GetDriverName;
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
class IVRDriverManager__GetDriverCount;
}
namespace OVR::OpenVR {
class IVRDriverManager__GetDriverHandle;
}
namespace OVR::OpenVR {
class IVRDriverManager__GetDriverName;
}
namespace OVR::OpenVR {
struct IVRDriverManager;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRDriverManager__GetDriverCount);
MARK_REF_PTR_T(::OVR::OpenVR::IVRDriverManager__GetDriverHandle);
MARK_REF_PTR_T(::OVR::OpenVR::IVRDriverManager__GetDriverName);
MARK_VAL_T(::OVR::OpenVR::IVRDriverManager);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRDriverManager/_GetDriverCount
class CORDL_TYPE IVRDriverManager__GetDriverCount : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2b4cc, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2b4e8, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2b4b8, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRDriverManager__GetDriverCount* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2b450, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRDriverManager__GetDriverCount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRDriverManager__GetDriverCount(IVRDriverManager__GetDriverCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRDriverManager__GetDriverCount(IVRDriverManager__GetDriverCount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8313 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRDriverManager__GetDriverCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRDriverManager/_GetDriverName
class CORDL_TYPE IVRDriverManager__GetDriverName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2b58c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2b604, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2b578, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::IVRDriverManager__GetDriverName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2b50c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRDriverManager__GetDriverName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRDriverManager__GetDriverName(IVRDriverManager__GetDriverName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRDriverManager__GetDriverName(IVRDriverManager__GetDriverName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8314 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRDriverManager__GetDriverName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRDriverManager/_GetDriverHandle
class CORDL_TYPE IVRDriverManager__GetDriverHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5c2b6b8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchDriverName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5c2b6d8, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5c2b6a4, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchDriverName);

  static inline ::OVR::OpenVR::IVRDriverManager__GetDriverHandle* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5c2b628, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRDriverManager__GetDriverHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRDriverManager__GetDriverHandle(IVRDriverManager__GetDriverHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRDriverManager__GetDriverHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRDriverManager__GetDriverHandle(IVRDriverManager__GetDriverHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRDriverManager__GetDriverHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRDriverManager
struct CORDL_TYPE IVRDriverManager {
public:
  // Declarations
  using _GetDriverCount = ::OVR::OpenVR::IVRDriverManager__GetDriverCount;

  using _GetDriverHandle = ::OVR::OpenVR::IVRDriverManager__GetDriverHandle;

  using _GetDriverName = ::OVR::OpenVR::IVRDriverManager__GetDriverName;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRDriverManager();

  // Ctor Parameters [CppParam { name: "GetDriverCount", ty: "::OVR::OpenVR::IVRDriverManager__GetDriverCount*", modifiers: "", def_value: None }, CppParam { name: "GetDriverName", ty:
  // "::OVR::OpenVR::IVRDriverManager__GetDriverName*", modifiers: "", def_value: None }, CppParam { name: "GetDriverHandle", ty: "::OVR::OpenVR::IVRDriverManager__GetDriverHandle*", modifiers: "",
  // def_value: None }]
  constexpr IVRDriverManager(::OVR::OpenVR::IVRDriverManager__GetDriverCount* GetDriverCount, ::OVR::OpenVR::IVRDriverManager__GetDriverName* GetDriverName,
                             ::OVR::OpenVR::IVRDriverManager__GetDriverHandle* GetDriverHandle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8316 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field GetDriverCount, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRDriverManager__GetDriverCount* GetDriverCount;

  /// @brief Field GetDriverName, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRDriverManager__GetDriverName* GetDriverName;

  /// @brief Field GetDriverHandle, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRDriverManager__GetDriverHandle* GetDriverHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverHandle) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRDriverManager, 0x18>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRDriverManager__GetDriverCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager__GetDriverCount*, "OVR.OpenVR", "IVRDriverManager/_GetDriverCount");
NEED_NO_BOX(::OVR::OpenVR::IVRDriverManager__GetDriverHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager__GetDriverHandle*, "OVR.OpenVR", "IVRDriverManager/_GetDriverHandle");
NEED_NO_BOX(::OVR::OpenVR::IVRDriverManager__GetDriverName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager__GetDriverName*, "OVR.OpenVR", "IVRDriverManager/_GetDriverName");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager, "OVR.OpenVR", "IVRDriverManager");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRDriverManager)
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverCount;
}
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverName;
}
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverHandle;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverCount;
}
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverHandle;
}
namespace OVR::OpenVR {
class __IVRDriverManager___GetDriverName;
}
namespace OVR::OpenVR {
struct IVRDriverManager;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRDriverManager___GetDriverCount);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRDriverManager___GetDriverHandle);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRDriverManager___GetDriverName);
MARK_VAL_T(::OVR::OpenVR::IVRDriverManager);
// Type: ::_GetDriverCount
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8518))
// CS Name: ::IVRDriverManager::_GetDriverCount*
class CORDL_TYPE __IVRDriverManager___GetDriverCount : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRDriverManager___GetDriverCount* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed258, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed314, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27ed328, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed348, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRDriverManager___GetDriverCount(__IVRDriverManager___GetDriverCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRDriverManager___GetDriverCount(__IVRDriverManager___GetDriverCount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRDriverManager___GetDriverCount();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRDriverManager___GetDriverCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDriverName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8519))
// CS Name: ::IVRDriverManager::_GetDriverName*
class CORDL_TYPE __IVRDriverManager___GetDriverName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRDriverManager___GetDriverName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed370, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed434, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method BeginInvoke, addr 0x27ed448, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t nDriver, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed4ec, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRDriverManager___GetDriverName(__IVRDriverManager___GetDriverName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRDriverManager___GetDriverName(__IVRDriverManager___GetDriverName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRDriverManager___GetDriverName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRDriverManager___GetDriverName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetDriverHandle
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8520))
// CS Name: ::IVRDriverManager::_GetDriverHandle*
class CORDL_TYPE __IVRDriverManager___GetDriverHandle : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRDriverManager___GetDriverHandle* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ed514, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ed5e8, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchDriverName);

  /// @brief Method BeginInvoke, addr 0x27ed5fc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchDriverName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ed61c, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRDriverManager___GetDriverHandle(__IVRDriverManager___GetDriverHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRDriverManager___GetDriverHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRDriverManager___GetDriverHandle(__IVRDriverManager___GetDriverHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRDriverManager___GetDriverHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRDriverManager___GetDriverHandle, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRDriverManager
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8521))
// CS Name: ::OVR.OpenVR::IVRDriverManager
struct CORDL_TYPE IVRDriverManager {
public:
  // Declarations
  using _GetDriverHandle = ::OVR::OpenVR::__IVRDriverManager___GetDriverHandle;

  using _GetDriverName = ::OVR::OpenVR::__IVRDriverManager___GetDriverName;

  using _GetDriverCount = ::OVR::OpenVR::__IVRDriverManager___GetDriverCount;

  // Ctor Parameters [CppParam { name: "GetDriverCount", ty: "::OVR::OpenVR::__IVRDriverManager___GetDriverCount*", modifiers: "", def_value: None }, CppParam { name: "GetDriverName", ty:
  // "::OVR::OpenVR::__IVRDriverManager___GetDriverName*", modifiers: "", def_value: None }, CppParam { name: "GetDriverHandle", ty: "::OVR::OpenVR::__IVRDriverManager___GetDriverHandle*", modifiers:
  // "", def_value: None }]
  constexpr IVRDriverManager(::OVR::OpenVR::__IVRDriverManager___GetDriverCount* GetDriverCount, ::OVR::OpenVR::__IVRDriverManager___GetDriverName* GetDriverName,
                             ::OVR::OpenVR::__IVRDriverManager___GetDriverHandle* GetDriverHandle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRDriverManager();

  /// @brief Field GetDriverCount, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRDriverManager___GetDriverCount* GetDriverCount;

  /// @brief Field GetDriverName, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRDriverManager___GetDriverName* GetDriverName;

  /// @brief Field GetDriverHandle, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRDriverManager___GetDriverHandle* GetDriverHandle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRDriverManager, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRDriverManager, GetDriverHandle) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRDriverManager___GetDriverCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRDriverManager___GetDriverCount*, "OVR.OpenVR", "IVRDriverManager/_GetDriverCount");
NEED_NO_BOX(::OVR::OpenVR::__IVRDriverManager___GetDriverHandle);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRDriverManager___GetDriverHandle*, "OVR.OpenVR", "IVRDriverManager/_GetDriverHandle");
NEED_NO_BOX(::OVR::OpenVR::__IVRDriverManager___GetDriverName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRDriverManager___GetDriverName*, "OVR.OpenVR", "IVRDriverManager/_GetDriverName");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRDriverManager, "OVR.OpenVR", "IVRDriverManager");

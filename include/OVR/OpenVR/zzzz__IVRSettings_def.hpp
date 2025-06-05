#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRSettings)
namespace OVR::OpenVR {
struct EVRSettingsError;
}
namespace OVR::OpenVR {
class IVRSettings__GetBool;
}
namespace OVR::OpenVR {
class IVRSettings__GetFloat;
}
namespace OVR::OpenVR {
class IVRSettings__GetInt32;
}
namespace OVR::OpenVR {
class IVRSettings__GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSettings__GetString;
}
namespace OVR::OpenVR {
class IVRSettings__RemoveKeyInSection;
}
namespace OVR::OpenVR {
class IVRSettings__RemoveSection;
}
namespace OVR::OpenVR {
class IVRSettings__SetBool;
}
namespace OVR::OpenVR {
class IVRSettings__SetFloat;
}
namespace OVR::OpenVR {
class IVRSettings__SetInt32;
}
namespace OVR::OpenVR {
class IVRSettings__SetString;
}
namespace OVR::OpenVR {
class IVRSettings__Sync;
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
class IVRSettings__GetBool;
}
namespace OVR::OpenVR {
class IVRSettings__GetFloat;
}
namespace OVR::OpenVR {
class IVRSettings__GetInt32;
}
namespace OVR::OpenVR {
class IVRSettings__GetSettingsErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRSettings__GetString;
}
namespace OVR::OpenVR {
class IVRSettings__RemoveKeyInSection;
}
namespace OVR::OpenVR {
class IVRSettings__RemoveSection;
}
namespace OVR::OpenVR {
class IVRSettings__SetBool;
}
namespace OVR::OpenVR {
class IVRSettings__SetFloat;
}
namespace OVR::OpenVR {
class IVRSettings__SetInt32;
}
namespace OVR::OpenVR {
class IVRSettings__SetString;
}
namespace OVR::OpenVR {
class IVRSettings__Sync;
}
namespace OVR::OpenVR {
struct IVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__GetBool);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__GetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__GetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__GetString);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__RemoveKeyInSection);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__RemoveSection);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__SetBool);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__SetFloat);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__SetInt32);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__SetString);
MARK_REF_PTR_T(::OVR::OpenVR::IVRSettings__Sync);
MARK_VAL_T(::OVR::OpenVR::IVRSettings);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_GetSettingsErrorNameFromEnum
class CORDL_TYPE IVRSettings__GetSettingsErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c3d4, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRSettingsError eError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c458, size 0x28, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c3c0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRSettingsError eError);

  static inline ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c334, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__GetSettingsErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetSettingsErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__GetSettingsErrorNameFromEnum(IVRSettings__GetSettingsErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetSettingsErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__GetSettingsErrorNameFromEnum(IVRSettings__GetSettingsErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8812 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_Sync
class CORDL_TYPE IVRSettings__Sync : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c524, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bForce, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c5e4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c50c, size 0x18, virtual true, abstract: false, final false
  inline bool Invoke(bool bForce, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__Sync* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c480, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__Sync();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__Sync", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__Sync(IVRSettings__Sync&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__Sync", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__Sync(IVRSettings__Sync const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8813 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__Sync, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_SetBool
class CORDL_TYPE IVRSettings__SetBool : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c6c8, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c79c, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c6b0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, bool bValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__SetBool* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c610, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__SetBool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__SetBool(IVRSettings__SetBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__SetBool(IVRSettings__SetBool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8814 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__SetBool, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_SetInt32
class CORDL_TYPE IVRSettings__SetInt32 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406c86c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406c93c, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c858, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, int32_t nValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__SetInt32* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c7b8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__SetInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__SetInt32(IVRSettings__SetInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__SetInt32(IVRSettings__SetInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__SetInt32, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_SetFloat
class CORDL_TYPE IVRSettings__SetFloat : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406ca0c, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406cadc, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406c9f8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, float_t flValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__SetFloat* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406c958, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__SetFloat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__SetFloat(IVRSettings__SetFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__SetFloat(IVRSettings__SetFloat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__SetFloat, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_SetString
class CORDL_TYPE IVRSettings__SetString : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406cbac, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406cc54, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406cb98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::StringW pchValue, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__SetString* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406caf8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__SetString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__SetString(IVRSettings__SetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__SetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__SetString(IVRSettings__SetString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8817 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__SetString, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_GetBool
class CORDL_TYPE IVRSettings__GetBool : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406cd24, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406cdc4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406cd10, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__GetBool* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406cc70, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__GetBool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetBool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__GetBool(IVRSettings__GetBool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetBool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__GetBool(IVRSettings__GetBool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8818 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__GetBool, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_GetInt32
class CORDL_TYPE IVRSettings__GetInt32 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406cea4, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406cf44, size 0x2c, virtual true, abstract: false, final false
  inline int32_t EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406ce90, size 0x14, virtual true, abstract: false, final false
  inline int32_t Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__GetInt32* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406cdf0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__GetInt32();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetInt32", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__GetInt32(IVRSettings__GetInt32&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetInt32", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__GetInt32(IVRSettings__GetInt32 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__GetInt32, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_GetFloat
class CORDL_TYPE IVRSettings__GetFloat : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406d024, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406d0c4, size 0x2c, virtual true, abstract: false, final false
  inline float_t EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406d010, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__GetFloat* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406cf70, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__GetFloat();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetFloat", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__GetFloat(IVRSettings__GetFloat&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetFloat", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__GetFloat(IVRSettings__GetFloat const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8820 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__GetFloat, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_GetString
class CORDL_TYPE IVRSettings__GetString : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406d1a4, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen,
                                             ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406d280, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406d190, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::System::Text::StringBuilder* pchValue, uint32_t unValueLen, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__GetString* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406d0f0, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__GetString();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__GetString(IVRSettings__GetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__GetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__GetString(IVRSettings__GetString const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__GetString, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_RemoveSection
class CORDL_TYPE IVRSettings__RemoveSection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406d350, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406d3e4, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406d33c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__RemoveSection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406d29c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__RemoveSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__RemoveSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__RemoveSection(IVRSettings__RemoveSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__RemoveSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__RemoveSection(IVRSettings__RemoveSection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8822 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__RemoveSection, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRSettings/_RemoveKeyInSection
class CORDL_TYPE IVRSettings__RemoveKeyInSection : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x406d4b4, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x406d554, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::EVRSettingsError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x406d4a0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::StringW pchSection, ::StringW pchSettingsKey, ::ByRef<::OVR::OpenVR::EVRSettingsError> peError);

  static inline ::OVR::OpenVR::IVRSettings__RemoveKeyInSection* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x406d400, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings__RemoveKeyInSection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__RemoveKeyInSection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRSettings__RemoveKeyInSection(IVRSettings__RemoveKeyInSection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRSettings__RemoveKeyInSection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRSettings__RemoveKeyInSection(IVRSettings__RemoveKeyInSection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8823 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings__RemoveKeyInSection, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRSettings
struct CORDL_TYPE IVRSettings {
public:
  // Declarations
  using _GetBool = ::OVR::OpenVR::IVRSettings__GetBool;

  using _GetFloat = ::OVR::OpenVR::IVRSettings__GetFloat;

  using _GetInt32 = ::OVR::OpenVR::IVRSettings__GetInt32;

  using _GetSettingsErrorNameFromEnum = ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum;

  using _GetString = ::OVR::OpenVR::IVRSettings__GetString;

  using _RemoveKeyInSection = ::OVR::OpenVR::IVRSettings__RemoveKeyInSection;

  using _RemoveSection = ::OVR::OpenVR::IVRSettings__RemoveSection;

  using _SetBool = ::OVR::OpenVR::IVRSettings__SetBool;

  using _SetFloat = ::OVR::OpenVR::IVRSettings__SetFloat;

  using _SetInt32 = ::OVR::OpenVR::IVRSettings__SetInt32;

  using _SetString = ::OVR::OpenVR::IVRSettings__SetString;

  using _Sync = ::OVR::OpenVR::IVRSettings__Sync;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRSettings();

  // Ctor Parameters [CppParam { name: "GetSettingsErrorNameFromEnum", ty: "::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*", modifiers: "", def_value: None }, CppParam { name: "Sync", ty:
  // "::OVR::OpenVR::IVRSettings__Sync*", modifiers: "", def_value: None }, CppParam { name: "SetBool", ty: "::OVR::OpenVR::IVRSettings__SetBool*", modifiers: "", def_value: None }, CppParam { name:
  // "SetInt32", ty: "::OVR::OpenVR::IVRSettings__SetInt32*", modifiers: "", def_value: None }, CppParam { name: "SetFloat", ty: "::OVR::OpenVR::IVRSettings__SetFloat*", modifiers: "", def_value: None
  // }, CppParam { name: "SetString", ty: "::OVR::OpenVR::IVRSettings__SetString*", modifiers: "", def_value: None }, CppParam { name: "GetBool", ty: "::OVR::OpenVR::IVRSettings__GetBool*", modifiers:
  // "", def_value: None }, CppParam { name: "GetInt32", ty: "::OVR::OpenVR::IVRSettings__GetInt32*", modifiers: "", def_value: None }, CppParam { name: "GetFloat", ty:
  // "::OVR::OpenVR::IVRSettings__GetFloat*", modifiers: "", def_value: None }, CppParam { name: "GetString", ty: "::OVR::OpenVR::IVRSettings__GetString*", modifiers: "", def_value: None }, CppParam {
  // name: "RemoveSection", ty: "::OVR::OpenVR::IVRSettings__RemoveSection*", modifiers: "", def_value: None }, CppParam { name: "RemoveKeyInSection", ty:
  // "::OVR::OpenVR::IVRSettings__RemoveKeyInSection*", modifiers: "", def_value: None }]
  constexpr IVRSettings(::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum* GetSettingsErrorNameFromEnum, ::OVR::OpenVR::IVRSettings__Sync* Sync, ::OVR::OpenVR::IVRSettings__SetBool* SetBool,
                        ::OVR::OpenVR::IVRSettings__SetInt32* SetInt32, ::OVR::OpenVR::IVRSettings__SetFloat* SetFloat, ::OVR::OpenVR::IVRSettings__SetString* SetString,
                        ::OVR::OpenVR::IVRSettings__GetBool* GetBool, ::OVR::OpenVR::IVRSettings__GetInt32* GetInt32, ::OVR::OpenVR::IVRSettings__GetFloat* GetFloat,
                        ::OVR::OpenVR::IVRSettings__GetString* GetString, ::OVR::OpenVR::IVRSettings__RemoveSection* RemoveSection,
                        ::OVR::OpenVR::IVRSettings__RemoveKeyInSection* RemoveKeyInSection) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8824 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field GetSettingsErrorNameFromEnum, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum* GetSettingsErrorNameFromEnum;

  /// @brief Field Sync, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__Sync* Sync;

  /// @brief Field SetBool, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__SetBool* SetBool;

  /// @brief Field SetInt32, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__SetInt32* SetInt32;

  /// @brief Field SetFloat, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__SetFloat* SetFloat;

  /// @brief Field SetString, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__SetString* SetString;

  /// @brief Field GetBool, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__GetBool* GetBool;

  /// @brief Field GetInt32, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__GetInt32* GetInt32;

  /// @brief Field GetFloat, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__GetFloat* GetFloat;

  /// @brief Field GetString, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__GetString* GetString;

  /// @brief Field RemoveSection, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__RemoveSection* RemoveSection;

  /// @brief Field RemoveKeyInSection, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRSettings__RemoveKeyInSection* RemoveKeyInSection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetSettingsErrorNameFromEnum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, Sync) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetBool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetInt32) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetFloat) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, SetString) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetBool) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetInt32) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetFloat) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, GetString) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, RemoveSection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRSettings, RemoveKeyInSection) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRSettings, 0x60>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__GetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__GetBool*, "OVR.OpenVR", "IVRSettings/_GetBool");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__GetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__GetFloat*, "OVR.OpenVR", "IVRSettings/_GetFloat");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__GetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__GetInt32*, "OVR.OpenVR", "IVRSettings/_GetInt32");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__GetSettingsErrorNameFromEnum*, "OVR.OpenVR", "IVRSettings/_GetSettingsErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__GetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__GetString*, "OVR.OpenVR", "IVRSettings/_GetString");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__RemoveKeyInSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__RemoveKeyInSection*, "OVR.OpenVR", "IVRSettings/_RemoveKeyInSection");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__RemoveSection);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__RemoveSection*, "OVR.OpenVR", "IVRSettings/_RemoveSection");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__SetBool);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__SetBool*, "OVR.OpenVR", "IVRSettings/_SetBool");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__SetFloat);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__SetFloat*, "OVR.OpenVR", "IVRSettings/_SetFloat");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__SetInt32);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__SetInt32*, "OVR.OpenVR", "IVRSettings/_SetInt32");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__SetString);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__SetString*, "OVR.OpenVR", "IVRSettings/_SetString");
NEED_NO_BOX(::OVR::OpenVR::IVRSettings__Sync);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings__Sync*, "OVR.OpenVR", "IVRSettings/_Sync");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSettings, "OVR.OpenVR", "IVRSettings");

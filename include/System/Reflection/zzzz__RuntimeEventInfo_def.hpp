#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeEventInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeEventInfo)
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct MonoEventInfo;
}
namespace System::Reflection {
class RuntimeModule;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class RuntimeType;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeEventInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeEventInfo);
// Dependencies System.IntPtr, System.Reflection.EventInfo, System.Runtime.Serialization.ISerializable
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.RuntimeEventInfo
class CORDL_TYPE RuntimeEventInfo : public ::System::Reflection::EventInfo {
public:
  // Declarations
  __declspec(property(get = get_BindingFlags)) ::System::Reflection::BindingFlags BindingFlags;

  __declspec(property(get = get_DeclaringType)) ::System::Type* DeclaringType;

  __declspec(property(get = get_MetadataToken)) int32_t MetadataToken;

  __declspec(property(get = get_Module)) ::System::Reflection::Module* Module;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_ReflectedType)) ::System::Type* ReflectedType;

  __declspec(property(get = get_ReflectedTypeInternal)) ::System::RuntimeType* ReflectedTypeInternal;

  /// @brief Field handle, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_handle, put = __cordl_internal_set_handle)) ::System::IntPtr handle;

  /// @brief Field klass, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_klass, put = __cordl_internal_set_klass)) ::System::IntPtr klass;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method GetAddMethod, addr 0x3d2d798, size 0x68, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);

  /// @brief Method GetBindingFlags, addr 0x3d2d490, size 0x164, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags GetBindingFlags();

  /// @brief Method GetCustomAttributes, addr 0x3d2dabc, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x3d2da54, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetDeclaringTypeInternal, addr 0x3d2d5f4, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* GetDeclaringTypeInternal();

  /// @brief Method GetEventInfo, addr 0x3d2d430, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Reflection::MonoEventInfo GetEventInfo(::System::Reflection::RuntimeEventInfo* ev);

  /// @brief Method GetObjectData, addr 0x3d2d6fc, size 0x9c, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRaiseMethod, addr 0x3d2d800, size 0x68, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);

  /// @brief Method GetRemoveMethod, addr 0x3d2d868, size 0x68, virtual true, abstract: false, final false
  inline ::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);

  /// @brief Method GetRuntimeModule, addr 0x3d2d470, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeModule* GetRuntimeModule();

  /// @brief Method IsDefined, addr 0x3d2d9e4, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::RuntimeEventInfo* New_ctor();

  /// @brief Method ToString, addr 0x3d2d954, size 0x90, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::IntPtr const& __cordl_internal_get_handle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_handle();

  constexpr ::System::IntPtr const& __cordl_internal_get_klass() const;

  constexpr ::System::IntPtr& __cordl_internal_get_klass();

  constexpr void __cordl_internal_set_handle(::System::IntPtr value);

  constexpr void __cordl_internal_set_klass(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x3d2db34, size 0x260, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_BindingFlags, addr 0x3d2d48c, size 0x4, virtual false, abstract: false, final false
  inline ::System::Reflection::BindingFlags get_BindingFlags();

  /// @brief Method get_DeclaringType, addr 0x3d2d8d0, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_DeclaringType();

  /// @brief Method get_MetadataToken, addr 0x3d2db2c, size 0x4, virtual true, abstract: false, final false
  inline int32_t get_MetadataToken();

  /// @brief Method get_Module, addr 0x3d2d46c, size 0x4, virtual true, abstract: false, final false
  inline ::System::Reflection::Module* get_Module();

  /// @brief Method get_Name, addr 0x3d2d928, size 0x2c, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ReflectedType, addr 0x3d2d8fc, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Type* get_ReflectedType();

  /// @brief Method get_ReflectedTypeInternal, addr 0x3d2d678, size 0x84, virtual false, abstract: false, final false
  inline ::System::RuntimeType* get_ReflectedTypeInternal();

  /// @brief Method get_event_info, addr 0x3d2d42c, size 0x4, virtual false, abstract: false, final false
  static inline void get_event_info(::System::Reflection::RuntimeEventInfo* ev, ::ByRef<::System::Reflection::MonoEventInfo> info);

  /// @brief Method get_metadata_token, addr 0x3d2db30, size 0x4, virtual false, abstract: false, final false
  static inline int32_t get_metadata_token(::System::Reflection::RuntimeEventInfo* monoEvent);

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeEventInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeEventInfo(RuntimeEventInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeEventInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeEventInfo(RuntimeEventInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3522 };

  /// @brief Field klass, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___klass;

  /// @brief Field handle, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::RuntimeEventInfo, ___klass) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeEventInfo, ___handle) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeEventInfo, 0x28>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeEventInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeEventInfo*, "System.Reflection", "RuntimeEventInfo");

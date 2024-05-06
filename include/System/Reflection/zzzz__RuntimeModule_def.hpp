#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeModule)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class RuntimeAssembly;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class RuntimeModule;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::RuntimeModule);
// Type: System.Reflection::RuntimeModule
// SizeInfo { instance_size: 64, native_size: 48, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::RuntimeModule*
class CORDL_TYPE RuntimeModule : public ::System::Reflection::Module {
public:
  // Declarations
  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  __declspec(property(get = get_ModuleVersionId))::System::Guid ModuleVersionId;

  __declspec(property(get = get_ScopeName))::StringW ScopeName;

  /// @brief Field _impl, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__impl, put = __cordl_internal_set__impl)) void* _impl;

  /// @brief Field assembly, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly))::System::Reflection::Assembly* assembly;

  /// @brief Field fqname, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fqname, put = __cordl_internal_set_fqname))::StringW fqname;

  /// @brief Field is_resource, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_is_resource, put = __cordl_internal_set_is_resource)) bool is_resource;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field scopename, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_scopename, put = __cordl_internal_set_scopename))::StringW scopename;

  /// @brief Field token, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_token, put = __cordl_internal_set_token)) int32_t token;

  /// @brief Method GetCustomAttributes, addr 0x28767dc, size 0x70, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x2876774, size 0x68, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetGuidInternal, addr 0x2876a4c, size 0x4, virtual false, abstract: false, final false
  static inline void GetGuidInternal(void* _cordl_module, ::ArrayW<uint8_t, ::Array<uint8_t>*> guid);

  /// @brief Method GetModuleVersionId, addr 0x28769cc, size 0x80, virtual true, abstract: false, final false
  inline ::System::Guid GetModuleVersionId();

  /// @brief Method GetObjectData, addr 0x28768bc, size 0x98, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRuntimeAssembly, addr 0x2876954, size 0x78, virtual false, abstract: false, final false
  inline ::System::Reflection::RuntimeAssembly* GetRuntimeAssembly();

  /// @brief Method IsDefined, addr 0x287684c, size 0x70, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsResource, addr 0x287676c, size 0x8, virtual true, abstract: false, final false
  inline bool IsResource();

  static inline ::System::Reflection::RuntimeModule* New_ctor();

  constexpr void* const& __cordl_internal_get__impl() const;

  constexpr void*& __cordl_internal_get__impl();

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_assembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __cordl_internal_get_assembly() const;

  constexpr ::StringW const& __cordl_internal_get_fqname() const;

  constexpr ::StringW& __cordl_internal_get_fqname();

  constexpr bool const& __cordl_internal_get_is_resource() const;

  constexpr bool& __cordl_internal_get_is_resource();

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr ::StringW const& __cordl_internal_get_scopename() const;

  constexpr ::StringW& __cordl_internal_get_scopename();

  constexpr int32_t const& __cordl_internal_get_token() const;

  constexpr int32_t& __cordl_internal_get_token();

  constexpr void __cordl_internal_set__impl(void* value);

  constexpr void __cordl_internal_set_assembly(::System::Reflection::Assembly* value);

  constexpr void __cordl_internal_set_fqname(::StringW value);

  constexpr void __cordl_internal_set_is_resource(bool value);

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_scopename(::StringW value);

  constexpr void __cordl_internal_set_token(int32_t value);

  /// @brief Method .ctor, addr 0x2876a50, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Assembly, addr 0x287674c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_ModuleVersionId, addr 0x287675c, size 0x10, virtual true, abstract: false, final false
  inline ::System::Guid get_ModuleVersionId();

  /// @brief Method get_ScopeName, addr 0x2876754, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_ScopeName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RuntimeModule();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RuntimeModule(RuntimeModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RuntimeModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RuntimeModule(RuntimeModule const&) = delete;

  /// @brief Field _impl, offset: 0x10, size: 0x8, def value: None
  void* ____impl;

  /// @brief Field assembly, offset: 0x18, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  /// @brief Field fqname, offset: 0x20, size: 0x8, def value: None
  ::StringW ___fqname;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field scopename, offset: 0x30, size: 0x8, def value: None
  ::StringW ___scopename;

  /// @brief Field is_resource, offset: 0x38, size: 0x1, def value: None
  bool ___is_resource;

  /// @brief Field token, offset: 0x3c, size: 0x4, def value: None
  int32_t ___token;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::RuntimeModule, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ____impl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___assembly) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___fqname) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___scopename) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___is_resource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::RuntimeModule, ___token) == 0x3c, "Offset mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::RuntimeModule);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::RuntimeModule*, "System.Reflection", "RuntimeModule");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Module)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class TypeFilter;
}
namespace System::Runtime::InteropServices {
class _Module;
}
namespace System::Runtime::Serialization {
class ISerializable;
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
class Module;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Module);
// Type: System.Reflection::Module
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::Module*
class CORDL_TYPE Module : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Assembly))::System::Reflection::Assembly* Assembly;

  /// @brief Field FilterTypeName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterTypeName, put = setStaticF_FilterTypeName))::System::Reflection::TypeFilter* FilterTypeName;

  /// @brief Field FilterTypeNameIgnoreCase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FilterTypeNameIgnoreCase, put = setStaticF_FilterTypeNameIgnoreCase))::System::Reflection::TypeFilter* FilterTypeNameIgnoreCase;

  __declspec(property(get = get_ModuleVersionId))::System::Guid ModuleVersionId;

  __declspec(property(get = get_ScopeName))::StringW ScopeName;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_Module"
  constexpr operator ::System::Runtime::InteropServices::_Module*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Equals, addr 0x2763210, size 0x8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method FilterTypeNameIgnoreCaseImpl, addr 0x276338c, size 0x164, virtual false, abstract: false, final false
  static inline bool FilterTypeNameIgnoreCaseImpl(::System::Type* cls, ::System::Object* filterCriteria);

  /// @brief Method FilterTypeNameImpl, addr 0x2763258, size 0x134, virtual false, abstract: false, final false
  static inline bool FilterTypeNameImpl(::System::Type* cls, ::System::Object* filterCriteria);

  /// @brief Method GetCustomAttributes, addr 0x27631c0, size 0x28, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x2763198, size 0x28, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetHashCode, addr 0x2763218, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetModuleVersionId, addr 0x27634f0, size 0x40, virtual true, abstract: false, final false
  inline ::System::Guid GetModuleVersionId();

  /// @brief Method GetObjectData, addr 0x27631e8, size 0x28, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefined, addr 0x2763170, size 0x28, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  /// @brief Method IsResource, addr 0x2763148, size 0x28, virtual true, abstract: false, final false
  inline bool IsResource();

  static inline ::System::Reflection::Module* New_ctor();

  /// @brief Method ToString, addr 0x276324c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x27630c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Reflection::TypeFilter* getStaticF_FilterTypeName();

  static inline ::System::Reflection::TypeFilter* getStaticF_FilterTypeNameIgnoreCase();

  /// @brief Method get_Assembly, addr 0x27630d0, size 0x28, virtual true, abstract: false, final false
  inline ::System::Reflection::Assembly* get_Assembly();

  /// @brief Method get_ModuleVersionId, addr 0x27630f8, size 0x28, virtual true, abstract: false, final false
  inline ::System::Guid get_ModuleVersionId();

  /// @brief Method get_ScopeName, addr 0x2763120, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_ScopeName();

  /// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
  constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

  /// @brief Convert to "::System::Runtime::InteropServices::_Module"
  constexpr ::System::Runtime::InteropServices::_Module* i___System__Runtime__InteropServices___Module() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  /// @brief Method op_Equality, addr 0x2763220, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Reflection::Module* left, ::System::Reflection::Module* right);

  static inline void setStaticF_FilterTypeName(::System::Reflection::TypeFilter* value);

  static inline void setStaticF_FilterTypeNameIgnoreCase(::System::Reflection::TypeFilter* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Module();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Module(Module&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Module", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Module(Module const&) = delete;

  /// @brief Field DefaultLookup value: static_cast<int32_t>(0x1c)
  static ::System::Reflection::BindingFlags const DefaultLookup;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Module, 0x10>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::Module);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Module*, "System.Reflection", "Module");

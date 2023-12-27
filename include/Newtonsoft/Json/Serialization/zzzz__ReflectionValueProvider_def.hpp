#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionValueProvider)
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionValueProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ReflectionValueProvider);
// Type: Newtonsoft.Json.Serialization::ReflectionValueProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11963))
// CS Name: ::Newtonsoft.Json.Serialization::ReflectionValueProvider*
class CORDL_TYPE ReflectionValueProvider : public ::System::Object {
public:
  // Declarations
  /// @brief Field _memberInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__memberInfo, put = __set__memberInfo))::System::Reflection::MemberInfo* _memberInfo;

  /// @brief Convert operator to "::Newtonsoft::Json::Serialization::IValueProvider"
  constexpr operator ::Newtonsoft::Json::Serialization::IValueProvider*() noexcept;

  constexpr ::System::Reflection::MemberInfo*& __get__memberInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __get__memberInfo() const;

  constexpr void __set__memberInfo(::System::Reflection::MemberInfo* value);

  static inline ::Newtonsoft::Json::Serialization::ReflectionValueProvider* New_ctor(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method .ctor addr 0x268f5a8 size 0x6c virtual false final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method SetValue addr 0x268f614 size 0x1a4 virtual true final true
  inline void SetValue(::System::Object* target, ::System::Object* value);

  /// @brief Method GetValue addr 0x268f7b8 size 0x1a0 virtual true final true
  inline ::System::Object* GetValue(::System::Object* target);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionValueProvider(ReflectionValueProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionValueProvider(ReflectionValueProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionValueProvider();

public:
  /// @brief Field _memberInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____memberInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ReflectionValueProvider, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionValueProvider*, "Newtonsoft.Json.Serialization", "ReflectionValueProvider");

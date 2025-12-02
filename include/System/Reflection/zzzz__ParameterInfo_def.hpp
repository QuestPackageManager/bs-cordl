#pragma once
// IWYU pragma private; include "System/Reflection/ParameterInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__ParameterAttributes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterInfo)
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
struct ParameterAttributes;
}
namespace System::Runtime::InteropServices {
class _ParameterInfo;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class ParameterInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::ParameterInfo);
// Dependencies System.Object, System.Reflection.ParameterAttributes
namespace System::Reflection {
// Is value type: false
// CS Name: System.Reflection.ParameterInfo
class CORDL_TYPE ParameterInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::Reflection::ParameterAttributes Attributes;

  /// @brief Field AttrsImpl, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_AttrsImpl, put = __cordl_internal_set_AttrsImpl)) ::System::Reflection::ParameterAttributes AttrsImpl;

  /// @brief Field ClassImpl, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ClassImpl, put = __cordl_internal_set_ClassImpl)) ::System::Type* ClassImpl;

  __declspec(property(get = get_DefaultValue)) ::System::Object* DefaultValue;

  /// @brief Field DefaultValueImpl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_DefaultValueImpl, put = __cordl_internal_set_DefaultValueImpl)) ::System::Object* DefaultValueImpl;

  __declspec(property(get = get_IsIn)) bool IsIn;

  __declspec(property(get = get_IsOptional)) bool IsOptional;

  __declspec(property(get = get_IsOut)) bool IsOut;

  __declspec(property(get = get_Member)) ::System::Reflection::MemberInfo* Member;

  /// @brief Field MemberImpl, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_MemberImpl, put = __cordl_internal_set_MemberImpl)) ::System::Reflection::MemberInfo* MemberImpl;

  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Field NameImpl, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_NameImpl, put = __cordl_internal_set_NameImpl)) ::StringW NameImpl;

  __declspec(property(get = get_ParameterType)) ::System::Type* ParameterType;

  __declspec(property(get = get_Position)) int32_t Position;

  /// @brief Field PositionImpl, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_PositionImpl, put = __cordl_internal_set_PositionImpl)) int32_t PositionImpl;

  /// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
  constexpr operator ::System::Reflection::ICustomAttributeProvider*() noexcept;

  /// @brief Convert operator to "::System::Runtime::InteropServices::_ParameterInfo"
  constexpr operator ::System::Runtime::InteropServices::_ParameterInfo*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Method GetCustomAttributes, addr 0x596a0c4, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes, addr 0x596a02c, size 0x98, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(bool inherit);

  /// @brief Method GetRealObject, addr 0x596a1c0, size 0x26c, virtual true, abstract: false, final true
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method IsDefined, addr 0x5969fb8, size 0x74, virtual true, abstract: false, final false
  inline bool IsDefined(::System::Type* attributeType, bool inherit);

  static inline ::System::Reflection::ParameterInfo* New_ctor();

  /// @brief Method ToString, addr 0x596a42c, size 0x94, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Reflection::ParameterAttributes const& __cordl_internal_get_AttrsImpl() const;

  constexpr ::System::Reflection::ParameterAttributes& __cordl_internal_get_AttrsImpl();

  constexpr ::System::Type* const& __cordl_internal_get_ClassImpl() const;

  constexpr ::System::Type*& __cordl_internal_get_ClassImpl();

  constexpr ::System::Object* const& __cordl_internal_get_DefaultValueImpl() const;

  constexpr ::System::Object*& __cordl_internal_get_DefaultValueImpl();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_MemberImpl() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_MemberImpl();

  constexpr ::StringW const& __cordl_internal_get_NameImpl() const;

  constexpr ::StringW& __cordl_internal_get_NameImpl();

  constexpr int32_t const& __cordl_internal_get_PositionImpl() const;

  constexpr int32_t& __cordl_internal_get_PositionImpl();

  constexpr void __cordl_internal_set_AttrsImpl(::System::Reflection::ParameterAttributes value);

  constexpr void __cordl_internal_set_ClassImpl(::System::Type* value);

  constexpr void __cordl_internal_set_DefaultValueImpl(::System::Object* value);

  constexpr void __cordl_internal_set_MemberImpl(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set_NameImpl(::StringW value);

  constexpr void __cordl_internal_set_PositionImpl(int32_t value);

  /// @brief Method .ctor, addr 0x5969f10, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Attributes, addr 0x5969f14, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::ParameterAttributes get_Attributes();

  /// @brief Method get_DefaultValue, addr 0x5969f90, size 0x28, virtual true, abstract: false, final false
  inline ::System::Object* get_DefaultValue();

  /// @brief Method get_IsIn, addr 0x5969f3c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsIn();

  /// @brief Method get_IsOptional, addr 0x5969f58, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsOptional();

  /// @brief Method get_IsOut, addr 0x5969f74, size 0x1c, virtual false, abstract: false, final false
  inline bool get_IsOut();

  /// @brief Method get_Member, addr 0x5969f1c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_Member();

  /// @brief Method get_Name, addr 0x5969f24, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ParameterType, addr 0x5969f2c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Type* get_ParameterType();

  /// @brief Method get_Position, addr 0x5969f34, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Position();

  /// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
  constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

  /// @brief Convert to "::System::Runtime::InteropServices::_ParameterInfo"
  constexpr ::System::Runtime::InteropServices::_ParameterInfo* i___System__Runtime__InteropServices___ParameterInfo() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IObjectReference"
  constexpr ::System::Runtime::Serialization::IObjectReference* i___System__Runtime__Serialization__IObjectReference() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParameterInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParameterInfo(ParameterInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParameterInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParameterInfo(ParameterInfo const&) = delete;

  /// @brief Field MetadataToken_ParamDef offset 0xffffffff size 0x4
  static constexpr int32_t MetadataToken_ParamDef{ static_cast<int32_t>(0x8000000) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3507 };

  /// @brief Field AttrsImpl, offset: 0x10, size: 0x4, def value: None
  ::System::Reflection::ParameterAttributes ___AttrsImpl;

  /// @brief Field ClassImpl, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___ClassImpl;

  /// @brief Field DefaultValueImpl, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___DefaultValueImpl;

  /// @brief Field MemberImpl, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___MemberImpl;

  /// @brief Field NameImpl, offset: 0x30, size: 0x8, def value: None
  ::StringW ___NameImpl;

  /// @brief Field PositionImpl, offset: 0x38, size: 0x4, def value: None
  int32_t ___PositionImpl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::ParameterInfo, ___AttrsImpl) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ParameterInfo, ___ClassImpl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ParameterInfo, ___DefaultValueImpl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ParameterInfo, ___MemberImpl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ParameterInfo, ___NameImpl) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Reflection::ParameterInfo, ___PositionImpl) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::ParameterInfo, 0x40>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::ParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterInfo*, "System.Reflection", "ParameterInfo");

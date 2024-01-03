#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TypeAnalyzer)
namespace Zenject {
class __TypeAnalyzer____c__DisplayClass23_0;
}
namespace Zenject {
struct ReflectionBakingCoverageModes;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectPropertyInfo;
}
// Forward declare root types
namespace Zenject {
class TypeAnalyzer;
}
namespace Zenject {
class __TypeAnalyzer____c__DisplayClass23_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::TypeAnalyzer);
MARK_REF_PTR_T(::Zenject::__TypeAnalyzer____c__DisplayClass23_0);
// Type: ::<>c__DisplayClass23_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11355))
// CS Name: ::TypeAnalyzer::<>c__DisplayClass23_0*
class CORDL_TYPE __TypeAnalyzer____c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::Zenject::__TypeAnalyzer____c__DisplayClass23_0* New_ctor();

  /// @brief Method .ctor, addr 0x2f1f0dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <CreateTypeInfoFromReflection>b__0, addr 0x2f1f514, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::__InjectTypeInfo__InjectMemberInfo* _CreateTypeInfoFromReflection_b__0(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* x);

  /// @brief Method <CreateTypeInfoFromReflection>b__1, addr 0x2f1f5a4, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::__InjectTypeInfo__InjectMemberInfo* _CreateTypeInfoFromReflection_b__1(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* x);

  /// @brief Method __zenCreate, addr 0x2f1f634, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2f1f690, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__TypeAnalyzer____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __TypeAnalyzer____c__DisplayClass23_0(__TypeAnalyzer____c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__TypeAnalyzer____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __TypeAnalyzer____c__DisplayClass23_0(__TypeAnalyzer____c__DisplayClass23_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __TypeAnalyzer____c__DisplayClass23_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__TypeAnalyzer____c__DisplayClass23_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__TypeAnalyzer____c__DisplayClass23_0, ___type) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::TypeAnalyzer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11354)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11356))
// CS Name: ::Zenject::TypeAnalyzer*
class CORDL_TYPE TypeAnalyzer : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass23_0 = ::Zenject::__TypeAnalyzer____c__DisplayClass23_0;

  /// @brief Field _typeInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__typeInfo, put = setStaticF__typeInfo))::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* _typeInfo;

  /// @brief Field _allowDuringValidation, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__allowDuringValidation,
                             put = setStaticF__allowDuringValidation))::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* _allowDuringValidation;

  /// @brief Field <ReflectionBakingCoverageMode>k__BackingField, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__ReflectionBakingCoverageMode_k__BackingField,
                             put = setStaticF__ReflectionBakingCoverageMode_k__BackingField))::Zenject::ReflectionBakingCoverageModes _ReflectionBakingCoverageMode_k__BackingField;

  static inline void setStaticF__typeInfo(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Zenject::InjectTypeInfo*>* getStaticF__typeInfo();

  static inline void setStaticF__allowDuringValidation(::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, bool>* getStaticF__allowDuringValidation();

  static inline void setStaticF__ReflectionBakingCoverageMode_k__BackingField(::Zenject::ReflectionBakingCoverageModes value);

  static inline ::Zenject::ReflectionBakingCoverageModes getStaticF__ReflectionBakingCoverageMode_k__BackingField();

  /// @brief Method get_ReflectionBakingCoverageMode, addr 0x2f1e76c, size 0x58, virtual false, abstract: false, final false
  static inline ::Zenject::ReflectionBakingCoverageModes get_ReflectionBakingCoverageMode();

  /// @brief Method set_ReflectionBakingCoverageMode, addr 0x2f1e7c4, size 0x5c, virtual false, abstract: false, final false
  static inline void set_ReflectionBakingCoverageMode(::Zenject::ReflectionBakingCoverageModes value);

  /// @brief Method ShouldAllowDuringValidation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool ShouldAllowDuringValidation();

  /// @brief Method ShouldAllowDuringValidation, addr 0x2f05dfc, size 0xec, virtual false, abstract: false, final false
  static inline bool ShouldAllowDuringValidation(::System::Type* type);

  /// @brief Method ShouldAllowDuringValidationInternal, addr 0x2f1e820, size 0x118, virtual false, abstract: false, final false
  static inline bool ShouldAllowDuringValidationInternal(::System::Type* type);

  /// @brief Method HasInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool HasInfo();

  /// @brief Method HasInfo, addr 0x2f1e938, size 0x60, virtual false, abstract: false, final false
  static inline bool HasInfo(::System::Type* type);

  /// @brief Method GetInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Zenject::InjectTypeInfo* GetInfo();

  /// @brief Method GetInfo, addr 0x2f0cf08, size 0x84, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* GetInfo(::System::Type* type);

  /// @brief Method TryGetInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Zenject::InjectTypeInfo* TryGetInfo();

  /// @brief Method TryGetInfo, addr 0x2f03c8c, size 0x1d4, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* TryGetInfo(::System::Type* type);

  /// @brief Method GetInfoInternal, addr 0x2f1e998, size 0x27c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* GetInfoInternal(::System::Type* type);

  /// @brief Method ShouldSkipTypeAnalysis, addr 0x2f1ec14, size 0x170, virtual false, abstract: false, final false
  static inline bool ShouldSkipTypeAnalysis(::System::Type* type);

  /// @brief Method IsStaticType, addr 0x2f1f054, size 0x88, virtual false, abstract: false, final false
  static inline bool IsStaticType(::System::Type* type);

  /// @brief Method CreateTypeInfoFromReflection, addr 0x2f1ed84, size 0x2d0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* CreateTypeInfoFromReflection(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "TypeAnalyzer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeAnalyzer(TypeAnalyzer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeAnalyzer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeAnalyzer(TypeAnalyzer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeAnalyzer();

public:
  /// @brief Field ReflectionBakingGetInjectInfoMethodName offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionBakingGetInjectInfoMethodName{ u"__zenCreateInjectTypeInfo" };

  /// @brief Field ReflectionBakingFactoryMethodName offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionBakingFactoryMethodName{ u"__zenCreate" };

  /// @brief Field ReflectionBakingInjectMethodPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionBakingInjectMethodPrefix{ u"__zenInjectMethod" };

  /// @brief Field ReflectionBakingFieldSetterPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionBakingFieldSetterPrefix{ u"__zenFieldSetter" };

  /// @brief Field ReflectionBakingPropertySetterPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString ReflectionBakingPropertySetterPrefix{ u"__zenPropertySetter" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::TypeAnalyzer, 0x10>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::TypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::TypeAnalyzer*, "Zenject", "TypeAnalyzer");
NEED_NO_BOX(::Zenject::__TypeAnalyzer____c__DisplayClass23_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__TypeAnalyzer____c__DisplayClass23_0*, "Zenject", "TypeAnalyzer/<>c__DisplayClass23_0");

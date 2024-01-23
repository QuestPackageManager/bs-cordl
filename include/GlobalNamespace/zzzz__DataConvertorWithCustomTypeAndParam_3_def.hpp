#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataConvertorWithCustomTypeAndParam_3)
namespace GlobalNamespace {
template <typename TOut, typename TParam> class DataItemConvertor_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename TType, typename TParam> class DataConvertorWithCustomTypeAndParam_3;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3);
// Type: ::DataConvertorWithCustomTypeAndParam`3
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T, typename TType, typename TParam>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4294))
// CS Name: ::DataConvertorWithCustomTypeAndParam`3<T,TType,TParam>*
class CORDL_TYPE DataConvertorWithCustomTypeAndParam_3 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _convertors, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__convertors,
                      put = __cordl_internal_set__convertors))::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* _convertors;

  constexpr ::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*& __cordl_internal_get__convertors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*> const&
  __cordl_internal_get__convertors() const;

  constexpr void __cordl_internal_set__convertors(::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* value);

  /// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T ProcessItem(::System::Object* item, TParam param, TType type);

  /// @brief Method AddConvertor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddConvertor(TType type, ::GlobalNamespace::DataItemConvertor_2<T, TParam>* dataItemConvertor);

  static inline ::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3<T, TType, TParam>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataConvertorWithCustomTypeAndParam_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataConvertorWithCustomTypeAndParam_3(DataConvertorWithCustomTypeAndParam_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataConvertorWithCustomTypeAndParam_3();

public:
  /// @brief Field _convertors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<TType, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* ____convertors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataConvertorWithCustomTypeAndParam_3, "", "DataConvertorWithCustomTypeAndParam`3");

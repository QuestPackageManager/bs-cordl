#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataConvertor_2)
namespace GlobalNamespace {
template <typename TOut, typename TParam> class DataItemConvertor_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T, typename TParam> class DataConvertor_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::DataConvertor_2);
// Type: ::DataConvertor`2
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// cpp template
template <typename T, typename TParam>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4295))
// CS Name: ::DataConvertor`2<T,TParam>*
class CORDL_TYPE DataConvertor_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _convertors, offset 0x10, size 0x8
  __declspec(property(get = __get__convertors, put = __set__convertors))::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* _convertors;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*& __get__convertors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>*> const& __get__convertors() const;

  constexpr void __set__convertors(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* value);

  /// @brief Method ProcessItem, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T ProcessItem(::System::Object* item, TParam param);

  /// @brief Method AddConvertor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void AddConvertor(::GlobalNamespace::DataItemConvertor_2<T, TParam>* dataItemConvertor);

  static inline ::GlobalNamespace::DataConvertor_2<T, TParam>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DataConvertor_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataConvertor_2(DataConvertor_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataConvertor_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataConvertor_2(DataConvertor_2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataConvertor_2();

public:
  /// @brief Field _convertors, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::DataItemConvertor_2<T, TParam>*>* ____convertors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataConvertor_2, "", "DataConvertor`2");

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/GenericNameProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GenericNameProvider)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Runtime::Serialization {
class IGenericNameProvider;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class GenericNameProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::GenericNameProvider);
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.GenericNameProvider
class CORDL_TYPE GenericNameProvider : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_ParametersFromBuiltInNamespaces)) bool ParametersFromBuiltInNamespaces;

  /// @brief Field genericParams, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_genericParams, put = __cordl_internal_set_genericParams)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> genericParams;

  /// @brief Field genericTypeName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_genericTypeName, put = __cordl_internal_set_genericTypeName)) ::StringW genericTypeName;

  /// @brief Field nestedParamCounts, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nestedParamCounts, put = __cordl_internal_set_nestedParamCounts)) ::System::Collections::Generic::IList_1<int32_t>* nestedParamCounts;

  /// @brief Convert operator to "::System::Runtime::Serialization::IGenericNameProvider"
  constexpr operator ::System::Runtime::Serialization::IGenericNameProvider*() noexcept;

  /// @brief Method GetGenericTypeName, addr 0x5f967fc, size 0x8, virtual true, abstract: false, final true
  inline ::StringW GetGenericTypeName();

  /// @brief Method GetNamespaces, addr 0x5f96718, size 0xe4, virtual true, abstract: false, final true
  inline ::StringW GetNamespaces();

  /// @brief Method GetNestedParameterCounts, addr 0x5f9651c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IList_1<int32_t>* GetNestedParameterCounts();

  /// @brief Method GetParameterCount, addr 0x5f96504, size 0x18, virtual true, abstract: false, final true
  inline int32_t GetParameterCount();

  /// @brief Method GetParameterName, addr 0x5f96524, size 0x1c, virtual true, abstract: false, final true
  inline ::StringW GetParameterName(int32_t paramIndex);

  /// @brief Method GetStableName, addr 0x5f96540, size 0x1d8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetStableName(int32_t i);

  static inline ::System::Runtime::Serialization::GenericNameProvider* New_ctor(::StringW genericTypeName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> genericParams);

  static inline ::System::Runtime::Serialization::GenericNameProvider* New_ctor(::System::Type* type);

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_genericParams() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_genericParams();

  constexpr ::StringW const& __cordl_internal_get_genericTypeName() const;

  constexpr ::StringW& __cordl_internal_get_genericTypeName();

  constexpr ::System::Collections::Generic::IList_1<int32_t>* const& __cordl_internal_get_nestedParamCounts() const;

  constexpr ::System::Collections::Generic::IList_1<int32_t>*& __cordl_internal_get_nestedParamCounts();

  constexpr void __cordl_internal_set_genericParams(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  constexpr void __cordl_internal_set_genericTypeName(::StringW value);

  constexpr void __cordl_internal_set_nestedParamCounts(::System::Collections::Generic::IList_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x5f96454, size 0xb0, virtual false, abstract: false, final false
  inline void _ctor(::StringW genericTypeName, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> genericParams);

  /// @brief Method .ctor, addr 0x5f9116c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_ParametersFromBuiltInNamespaces, addr 0x5f96804, size 0x64, virtual true, abstract: false, final true
  inline bool get_ParametersFromBuiltInNamespaces();

  /// @brief Convert to "::System::Runtime::Serialization::IGenericNameProvider"
  constexpr ::System::Runtime::Serialization::IGenericNameProvider* i___System__Runtime__Serialization__IGenericNameProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GenericNameProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GenericNameProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GenericNameProvider(GenericNameProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GenericNameProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GenericNameProvider(GenericNameProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16985 };

  /// @brief Field genericTypeName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___genericTypeName;

  /// @brief Field genericParams, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___genericParams;

  /// @brief Field nestedParamCounts, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IList_1<int32_t>* ___nestedParamCounts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::GenericNameProvider, ___genericTypeName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::GenericNameProvider, ___genericParams) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Serialization::GenericNameProvider, ___nestedParamCounts) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::GenericNameProvider, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::GenericNameProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::GenericNameProvider*, "System.Runtime.Serialization", "GenericNameProvider");

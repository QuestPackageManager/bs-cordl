#pragma once
// IWYU pragma private; include "Unity/Properties/TypeConversion.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Properties/zzzz__ConversionRegistry_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeConversion)
namespace System {
class Delegate;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct Guid;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct ConversionRegistry;
}
namespace Unity::Properties {
class PrimitiveConverters_TypeConversion___c;
}
namespace Unity::Properties {
class TypeConversion_PrimitiveConverters;
}
namespace Unity::Properties {
class TypeConversion_PrimitivesConverters;
}
namespace Unity::Properties {
struct TypeConversion_Unsafe;
}
namespace Unity::Properties {
template <typename TSource, typename TDestination> class TypeConverter_2;
}
// Forward declare root types
namespace Unity::Properties {
class PrimitiveConverters_TypeConversion___c;
}
namespace Unity::Properties {
class TypeConversion;
}
namespace Unity::Properties {
class TypeConversion_PrimitiveConverters;
}
namespace Unity::Properties {
class TypeConversion_PrimitivesConverters;
}
namespace Unity::Properties {
struct TypeConversion_Unsafe;
}
// Write type traits
MARK_REF_T(::Unity::Properties::PrimitiveConverters_TypeConversion___c*);
MARK_REF_T(::Unity::Properties::TypeConversion*);
MARK_REF_T(::Unity::Properties::TypeConversion_PrimitiveConverters*);
MARK_REF_T(::Unity::Properties::TypeConversion_PrimitivesConverters*);
MARK_VAL_T(::Unity::Properties::TypeConversion_Unsafe);
DEFINE_IL2CPP_CLASS(::Unity::Properties::PrimitiveConverters_TypeConversion___c*, "Unity.Properties", "TypeConversion/PrimitiveConverters/<>c");
DEFINE_IL2CPP_CLASS(::Unity::Properties::TypeConversion*, "Unity.Properties", "TypeConversion");
DEFINE_IL2CPP_CLASS(::Unity::Properties::TypeConversion_PrimitiveConverters*, "Unity.Properties", "TypeConversion/PrimitiveConverters");
DEFINE_IL2CPP_CLASS(::Unity::Properties::TypeConversion_PrimitivesConverters*, "Unity.Properties", "TypeConversion/PrimitivesConverters");
DEFINE_IL2CPP_CLASS(::Unity::Properties::TypeConversion_Unsafe, "Unity.Properties", "TypeConversion/Unsafe");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.TypeConversion/Unsafe
#pragma pack(push, 0)
struct CORDL_TYPE TypeConversion_Unsafe {
public:
  // Declarations
  /// @brief Method LazyRegister, addr 0x700e7bc, size 0x78, virtual false, abstract: false, final false
  static inline void LazyRegister(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* getConverterDelegate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion_Unsafe();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20778 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::Unity::Properties::TypeConversion_Unsafe) == 0x1, "Size mismatch!");

} // namespace Unity::Properties
// [CompilerGenerated]
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion/PrimitiveConverters/<>c
class CORDL_TYPE PrimitiveConverters_TypeConversion___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Unity::Properties::PrimitiveConverters_TypeConversion___c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* __9__0_0;

  static inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* New_ctor();

  /// @brief Method <Register>b__0_0, addr 0x700e88c, size 0x2c, virtual false, abstract: false, final false
  inline ::System::Guid _Register_b__0_0(::by_ref<::StringW> g);

  /// @brief Method .ctor, addr 0x700e888, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::PrimitiveConverters_TypeConversion___c* getStaticF___9();

  static inline ::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* getStaticF___9__0_0();

  static inline void setStaticF___9(::Unity::Properties::PrimitiveConverters_TypeConversion___c* value);

  static inline void setStaticF___9__0_0(::Unity::Properties::TypeConverter_2<::StringW, ::System::Guid>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimitiveConverters_TypeConversion___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveConverters_TypeConversion___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimitiveConverters_TypeConversion___c(PrimitiveConverters_TypeConversion___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimitiveConverters_TypeConversion___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimitiveConverters_TypeConversion___c(PrimitiveConverters_TypeConversion___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20779 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::PrimitiveConverters_TypeConversion___c) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion/PrimitiveConverters
class CORDL_TYPE TypeConversion_PrimitiveConverters : public ::System::Object {
public:
  // Declarations
  using __c = ::Unity::Properties::PrimitiveConverters_TypeConversion___c;

  /// @brief Method Register, addr 0x700e5fc, size 0x180, virtual false, abstract: false, final false
  static inline void Register();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion_PrimitiveConverters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitiveConverters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConversion_PrimitiveConverters(TypeConversion_PrimitiveConverters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitiveConverters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConversion_PrimitiveConverters(TypeConversion_PrimitiveConverters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::TypeConversion_PrimitiveConverters) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion/PrimitivesConverters
class CORDL_TYPE TypeConversion_PrimitivesConverters : public ::System::Object {
public:
  // Declarations
  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<::StringW> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<bool> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<char16_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<double_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<float_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<int16_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<int32_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<int64_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<int8_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<uint16_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<uint32_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<uint64_t> source);

  /// @brief Method DoConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TDestination> static inline TDestination DoConvert(::by_ref<uint8_t> source);

  /// @brief Method TryConvertPrimitiveOrString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvertPrimitiveOrString(::by_ref<TSource> source, ::by_ref<TDestination> destination);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion_PrimitivesConverters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitivesConverters", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConversion_PrimitivesConverters(TypeConversion_PrimitivesConverters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion_PrimitivesConverters", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConversion_PrimitivesConverters(TypeConversion_PrimitivesConverters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20781 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::TypeConversion_PrimitivesConverters) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies System.Object, Unity.Properties.ConversionRegistry
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.TypeConversion
class CORDL_TYPE TypeConversion : public ::System::Object {
public:
  // Declarations
  using PrimitiveConverters = ::Unity::Properties::TypeConversion_PrimitiveConverters;

  using PrimitivesConverters = ::Unity::Properties::TypeConversion_PrimitivesConverters;

  using Unsafe = ::Unity::Properties::TypeConversion_Unsafe;

  /// @brief Field s_GlobalConverters, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_GlobalConverters, put = setStaticF_s_GlobalConverters)) ::Unity::Properties::ConversionRegistry s_GlobalConverters;

  /// @brief Method IsNumericType, addr 0x700e77c, size 0x40, virtual false, abstract: false, final false
  static inline bool IsNumericType(::System::Type* t);

  /// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination>
  static inline bool TryConvert(/* [IsReadOnly] */ ::by_ref<::Unity::Properties::ConversionRegistry> registry, ::by_ref<TSource> source, ::by_ref<TDestination> destination);

  /// @brief Method TryConvert, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvert(::by_ref<TSource> source, ::by_ref<TDestination> destination);

  /// @brief Method TryConvertEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvertEnum(::by_ref<TSource> source, ::by_ref<TDestination> destination);

  /// @brief Method TryConvertNullable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvertNullable(::by_ref<TSource> source, ::by_ref<TDestination> destination);

  /// @brief Method TryConvertToUnityEngineObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSource, typename TDestination> static inline bool TryConvertToUnityEngineObject(TSource source, ::by_ref<TDestination> destination);

  static inline ::Unity::Properties::ConversionRegistry getStaticF_s_GlobalConverters();

  static inline void setStaticF_s_GlobalConverters(::Unity::Properties::ConversionRegistry value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeConversion();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeConversion(TypeConversion&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeConversion", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeConversion(TypeConversion const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20782 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::TypeConversion) == 0x10, "Size mismatch!");

} // namespace Unity::Properties

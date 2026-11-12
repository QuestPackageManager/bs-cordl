#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelProductDataExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LevelProductDataExtensions)
namespace GlobalNamespace {
template <typename TLevelProductData> class ILevelPackProductData_1;
}
namespace GlobalNamespace {
class ILevelProductData;
}
namespace GlobalNamespace {
class LevelProductDataExtensions___c;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__0_1;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__DisplayClass1_0_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelProductDataExtensions;
}
namespace GlobalNamespace {
class LevelProductDataExtensions___c;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__0_1;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__DisplayClass0_0_1;
}
namespace GlobalNamespace {
template <typename TLevelProductData> class LevelProductDataExtensions___c__DisplayClass1_0_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LevelProductDataExtensions*);
MARK_REF_T(::GlobalNamespace::LevelProductDataExtensions___c*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LevelProductDataExtensions___c__0_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelProductDataExtensions*, "", "LevelProductDataExtensions");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LevelProductDataExtensions___c*, "", "LevelProductDataExtensions/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LevelProductDataExtensions___c__0_1, "", "LevelProductDataExtensions/<>c__0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1, "", "LevelProductDataExtensions/<>c__DisplayClass0_0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1, "", "LevelProductDataExtensions/<>c__DisplayClass1_0`1");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelProductDataExtensions/<>c
class CORDL_TYPE LevelProductDataExtensions___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LevelProductDataExtensions___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>* __9__3_0;

  /// @brief Field <>9__3_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_1, put = setStaticF___9__3_1)) ::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>* __9__3_1;

  static inline ::GlobalNamespace::LevelProductDataExtensions___c* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <GetDiscontinuedLevelIds>b__3_0, addr 0x39f6178, size 0xb0, virtual false, abstract: false, final false
  inline bool _GetDiscontinuedLevelIds_b__3_0(::GlobalNamespace::ILevelProductData* levelProductData);

  /// [NullableContext(0)]
  /// @brief Method <GetDiscontinuedLevelIds>b__3_1, addr 0x39f6228, size 0xa0, virtual false, abstract: false, final false
  inline ::StringW _GetDiscontinuedLevelIds_b__3_1(::GlobalNamespace::ILevelProductData* levelProductData);

  /// @brief Method .ctor, addr 0x39f6174, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelProductDataExtensions___c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>* getStaticF___9__3_0();

  static inline ::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>* getStaticF___9__3_1();

  static inline void setStaticF___9(::GlobalNamespace::LevelProductDataExtensions___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::GlobalNamespace::ILevelProductData*, bool>* value);

  static inline void setStaticF___9__3_1(::System::Func_2<::GlobalNamespace::ILevelProductData*, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductDataExtensions___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductDataExtensions___c(LevelProductDataExtensions___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductDataExtensions___c(LevelProductDataExtensions___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14605 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LevelProductDataExtensions___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TLevelProductData>
// Is value type: false
// CS Name: LevelProductDataExtensions/<>c__0`1<TLevelProductData>
class CORDL_TYPE LevelProductDataExtensions___c__0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<TLevelProductData, bool>* __9__0_0;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<TLevelProductData, ::StringW>* __9__0_2;

  static inline ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <GetDiscontinuedLevelIds>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetDiscontinuedLevelIds_b__0_0(TLevelProductData levelProductData);

  /// [NullableContext(0)]
  /// @brief Method <GetDiscontinuedLevelIds>b__0_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW _GetDiscontinuedLevelIds_b__0_2(TLevelProductData levelProductData);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* getStaticF___9();

  static inline ::System::Func_2<TLevelProductData, bool>* getStaticF___9__0_0();

  static inline ::System::Func_2<TLevelProductData, ::StringW>* getStaticF___9__0_2();

  static inline void setStaticF___9(::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>* value);

  static inline void setStaticF___9__0_0(::System::Func_2<TLevelProductData, bool>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<TLevelProductData, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductDataExtensions___c__0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductDataExtensions___c__0_1(LevelProductDataExtensions___c__0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductDataExtensions___c__0_1(LevelProductDataExtensions___c__0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14606 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TLevelProductData>
// Is value type: false
// CS Name: LevelProductDataExtensions/<>c__DisplayClass0_0`1<TLevelProductData>
class CORDL_TYPE LevelProductDataExtensions___c__DisplayClass0_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field isLevelOwned, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_isLevelOwned, put = __cordl_internal_set_isLevelOwned)) ::System::Func_2<TLevelProductData, bool>* isLevelOwned;

  static inline ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <GetDiscontinuedLevelIds>b__1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _GetDiscontinuedLevelIds_b__1(TLevelProductData levelProductData);

  constexpr ::System::Func_2<TLevelProductData, bool>* const& __cordl_internal_get_isLevelOwned() const;

  constexpr ::System::Func_2<TLevelProductData, bool>*& __cordl_internal_get_isLevelOwned();

  constexpr void __cordl_internal_set_isLevelOwned(::System::Func_2<TLevelProductData, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductDataExtensions___c__DisplayClass0_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__DisplayClass0_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductDataExtensions___c__DisplayClass0_0_1(LevelProductDataExtensions___c__DisplayClass0_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__DisplayClass0_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductDataExtensions___c__DisplayClass0_0_1(LevelProductDataExtensions___c__DisplayClass0_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14607 };

  /// [Nullable(0)]
  /// @brief Field isLevelOwned, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TLevelProductData, bool>* ___isLevelOwned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template <typename TLevelProductData>
// Is value type: false
// CS Name: LevelProductDataExtensions/<>c__DisplayClass1_0`1<TLevelProductData>
class CORDL_TYPE LevelProductDataExtensions___c__DisplayClass1_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field isLevelOwned, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_isLevelOwned, put = __cordl_internal_set_isLevelOwned)) ::System::Func_2<TLevelProductData, bool>* isLevelOwned;

  static inline ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <HasLevelPackEntitlement>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _HasLevelPackEntitlement_b__0(TLevelProductData levelProductData);

  constexpr ::System::Func_2<TLevelProductData, bool>* const& __cordl_internal_get_isLevelOwned() const;

  constexpr ::System::Func_2<TLevelProductData, bool>*& __cordl_internal_get_isLevelOwned();

  constexpr void __cordl_internal_set_isLevelOwned(::System::Func_2<TLevelProductData, bool>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductDataExtensions___c__DisplayClass1_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__DisplayClass1_0_1", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductDataExtensions___c__DisplayClass1_0_1(LevelProductDataExtensions___c__DisplayClass1_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions___c__DisplayClass1_0_1", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductDataExtensions___c__DisplayClass1_0_1(LevelProductDataExtensions___c__DisplayClass1_0_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14608 };

  /// [Nullable(0)]
  /// @brief Field isLevelOwned, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<TLevelProductData, bool>* ___isLevelOwned;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// [NullableContext(1)]
// [Nullable(0)]
// [Extension]
// Dependencies ILevelProductData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelProductDataExtensions
class CORDL_TYPE LevelProductDataExtensions : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::LevelProductDataExtensions___c;

  template <typename TLevelProductData> using __c__0_1 = ::GlobalNamespace::LevelProductDataExtensions___c__0_1<TLevelProductData>;

  template <typename TLevelProductData> using __c__DisplayClass0_0_1 = ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass0_0_1<TLevelProductData>;

  template <typename TLevelProductData> using __c__DisplayClass1_0_1 = ::GlobalNamespace::LevelProductDataExtensions___c__DisplayClass1_0_1<TLevelProductData>;

  /// [Extension]
  /// @brief Method GetDiscontinuedLevelIds, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TLevelProductData>
    requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
  static inline ::ArrayW<::StringW> GetDiscontinuedLevelIds(::System::Collections::Generic::IEnumerable_1<TLevelProductData>* levelProductsData, bool isOwnershipDataValid,
                                                            ::System::Func_2<TLevelProductData, bool>* isLevelOwned);

  /// [Extension]
  /// @brief Method GetDiscontinuedLevelIds, addr 0x39e3c98, size 0x2c8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::StringW>*
  GetDiscontinuedLevelIds(/* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>* levelPackProductData);

  /// [Extension]
  /// @brief Method HasLevelPackEntitlement, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TLevelProductData>
    requires(::cordl_internals::type_constraint<TLevelProductData, ::GlobalNamespace::ILevelProductData*>)
  static inline bool HasLevelPackEntitlement(/* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<TLevelProductData>* levelPackProductData,
                                             ::System::Func_2<TLevelProductData, bool>* isLevelOwned);

  /// [Extension]
  /// @brief Method IsDiscontinued, addr 0x39e3b9c, size 0xb4, virtual false, abstract: false, final false
  static inline bool IsDiscontinued(/* [Nullable(new[] { 2, 1 })] */ ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::ILevelProductData*>* levelPackProductData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelProductDataExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelProductDataExtensions(LevelProductDataExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelProductDataExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelProductDataExtensions(LevelProductDataExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14609 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::LevelProductDataExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace

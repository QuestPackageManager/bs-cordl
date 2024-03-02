#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Text/zzzz__Normalization_def.hpp"
#include "System/Text/zzzz__NormalizationCheck_def.hpp"
#include "System/Text/zzzz__NormalizationForm_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Text::Normalization.PropValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(int32_t)>(&::System::Text::Normalization::PropValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2542394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "PropValue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.CharMapIdx
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Text::Normalization::CharMapIdx)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2542428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "CharMapIdx", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.GetCombiningClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int32_t)>(&::System::Text::Normalization::GetCombiningClass)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x25424bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCombiningClass", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.GetPrimaryCompositeFromMapIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Text::Normalization::GetPrimaryCompositeFromMapIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2542564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetPrimaryCompositeFromMapIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.GetPrimaryCompositeHelperIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t)>(&::System::Text::Normalization::GetPrimaryCompositeHelperIndex)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x254260c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetPrimaryCompositeHelperIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Compose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::Text::Normalization::Compose)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x25426b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Compose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::StringW, int32_t, int32_t)>(&::System::Text::Normalization::Combine)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x25428c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Combine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int32_t, int32_t)>(&::System::Text::Normalization::Combine)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2542a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.CombineHangul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Text::StringBuilder*, ::StringW, int32_t)>(&::System::Text::Normalization::CombineHangul)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2542c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "CombineHangul", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Fetch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Text::StringBuilder*, ::StringW, int32_t)>(&::System::Text::Normalization::Fetch)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2543024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Fetch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.TryComposeWithPreviousStarter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Text::StringBuilder*, ::StringW, int32_t)>(
    &::System::Text::Normalization::TryComposeWithPreviousStarter)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2542df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "TryComposeWithPreviousStarter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.TryCompose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, int32_t, int32_t)>(&::System::Text::Normalization::TryCompose)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2543060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "TryCompose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Decompose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::Text::Normalization::Decompose)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2543178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Decompose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::System::Text::StringBuilder*>, int32_t)>(&::System::Text::Normalization::Decompose)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2542794;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.ReorderCanonical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::System::Text::StringBuilder*>, int32_t)>(
    &::System::Text::Normalization::ReorderCanonical)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x25433dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "ReorderCanonical", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.DecomposeChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Text::StringBuilder*>, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>, ::StringW, int32_t,
                                                                                           int32_t, ByRef<int32_t>)>(&::System::Text::Normalization::DecomposeChar)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2543204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "DecomposeChar", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.QuickCheck
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::NormalizationCheck (*)(char16_t, int32_t)>(&::System::Text::Normalization::QuickCheck)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2542b10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "QuickCheck", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.GetCanonicalHangul
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t)>(
    &::System::Text::Normalization::GetCanonicalHangul)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2543804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCanonicalHangul", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.GetCanonical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, ::ArrayW<int32_t, ::Array<int32_t>*>, int32_t, int32_t)>(
    &::System::Text::Normalization::GetCanonical)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x254364c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCanonical", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Normalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::NormalizationForm)>(&::System::Text::Normalization::Normalize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25438f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::NormalizationForm>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.Normalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int32_t)>(&::System::Text::Normalization::Normalize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x25439ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::Normalization.load_normalization_resource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<void*>, ByRef<void*>, ByRef<void*>, ByRef<void*>, ByRef<void*>, ByRef<void*>)>(
    &::System::Text::Normalization::load_normalization_resource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2543a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "load_normalization_resource", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
    return ___internal_method;
  }
};
inline void System::Text::Normalization::setStaticF_props(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "props", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> System::Text::Normalization::getStaticF_props() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "props", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_mappedChars(::cordl_internals::Ptr<int32_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<int32_t>, "mappedChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<int32_t>>(value));
}
inline ::cordl_internals::Ptr<int32_t> System::Text::Normalization::getStaticF_mappedChars() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<int32_t>, "mappedChars", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_charMapIndex(::cordl_internals::Ptr<int16_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<int16_t>, "charMapIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<int16_t>>(value));
}
inline ::cordl_internals::Ptr<int16_t> System::Text::Normalization::getStaticF_charMapIndex() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<int16_t>, "charMapIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_helperIndex(::cordl_internals::Ptr<int16_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<int16_t>, "helperIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<int16_t>>(value));
}
inline ::cordl_internals::Ptr<int16_t> System::Text::Normalization::getStaticF_helperIndex() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<int16_t>, "helperIndex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_mapIdxToComposite(::cordl_internals::Ptr<uint16_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint16_t>, "mapIdxToComposite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<uint16_t>>(value));
}
inline ::cordl_internals::Ptr<uint16_t> System::Text::Normalization::getStaticF_mapIdxToComposite() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint16_t>, "mapIdxToComposite", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_combiningClass(::cordl_internals::Ptr<uint8_t> value) {
  ::cordl_internals::setStaticField<::cordl_internals::Ptr<uint8_t>, "combiningClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(
      std::forward<::cordl_internals::Ptr<uint8_t>>(value));
}
inline ::cordl_internals::Ptr<uint8_t> System::Text::Normalization::getStaticF_combiningClass() {
  return ::cordl_internals::getStaticField<::cordl_internals::Ptr<uint8_t>, "combiningClass", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_forLock(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "forLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Text::Normalization::getStaticF_forLock() {
  return ::cordl_internals::getStaticField<::System::Object*, "forLock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline void System::Text::Normalization::setStaticF_isReady(bool value) {
  ::cordl_internals::setStaticField<bool, "isReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>(std::forward<bool>(value));
}
inline bool System::Text::Normalization::getStaticF_isReady() {
  return ::cordl_internals::getStaticField<bool, "isReady", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get>();
}
inline uint32_t System::Text::Normalization::PropValue(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "PropValue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, cp);
}
inline int32_t System::Text::Normalization::CharMapIdx(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "CharMapIdx", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cp);
}
inline uint8_t System::Text::Normalization::GetCombiningClass(int32_t c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCombiningClass",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, c);
}
inline int32_t System::Text::Normalization::GetPrimaryCompositeFromMapIndex(int32_t src) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetPrimaryCompositeFromMapIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, src);
}
inline int32_t System::Text::Normalization::GetPrimaryCompositeHelperIndex(int32_t cp) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetPrimaryCompositeHelperIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, cp);
}
inline ::StringW System::Text::Normalization::Compose(::StringW source, int32_t checkType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Compose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source, checkType);
}
inline ::System::Text::StringBuilder* System::Text::Normalization::Combine(::StringW source, int32_t start, int32_t checkType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::StringBuilder*, false>(nullptr, ___internal_method, source, start, checkType);
}
inline void System::Text::Normalization::Combine(::System::Text::StringBuilder* sb, int32_t i, int32_t checkType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Combine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, i, checkType);
}
inline int32_t System::Text::Normalization::CombineHangul(::System::Text::StringBuilder* sb, ::StringW s, int32_t current) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "CombineHangul", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sb, s, current);
}
inline int32_t System::Text::Normalization::Fetch(::System::Text::StringBuilder* sb, ::StringW s, int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Fetch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sb, s, i);
}
inline int32_t System::Text::Normalization::TryComposeWithPreviousStarter(::System::Text::StringBuilder* sb, ::StringW s, int32_t current) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "TryComposeWithPreviousStarter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sb, s, current);
}
inline int32_t System::Text::Normalization::TryCompose(int32_t i, int32_t starter, int32_t candidate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "TryCompose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, i, starter, candidate);
}
inline ::StringW System::Text::Normalization::Decompose(::StringW source, int32_t checkType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source, checkType);
}
inline void System::Text::Normalization::Decompose(::StringW source, ByRef<::System::Text::StringBuilder*> sb, int32_t checkType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Decompose", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, source, sb, checkType);
}
inline void System::Text::Normalization::ReorderCanonical(::StringW src, ByRef<::System::Text::StringBuilder*> sb, int32_t start) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "ReorderCanonical", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, src, sb, start);
}
inline void System::Text::Normalization::DecomposeChar(ByRef<::System::Text::StringBuilder*> sb, ByRef<::ArrayW<int32_t, ::Array<int32_t>*>> buf, ::StringW s, int32_t i, int32_t checkType,
                                                       ByRef<int32_t> start) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "DecomposeChar", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::Text::StringBuilder*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int32_t, ::Array<int32_t>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sb, buf, s, i, checkType, start);
}
inline ::System::Text::NormalizationCheck System::Text::Normalization::QuickCheck(char16_t c, int32_t type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "QuickCheck", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Text::NormalizationCheck, false>(nullptr, ___internal_method, c, type);
}
inline int32_t System::Text::Normalization::GetCanonicalHangul(int32_t s, ::ArrayW<int32_t, ::Array<int32_t>*> buf, int32_t bufIdx) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCanonicalHangul", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s, buf, bufIdx);
}
inline int32_t System::Text::Normalization::GetCanonical(int32_t c, ::ArrayW<int32_t, ::Array<int32_t>*> buf, int32_t bufIdx, int32_t checkType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "GetCanonical", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, c, buf, bufIdx, checkType);
}
inline ::StringW System::Text::Normalization::Normalize(::StringW source, ::System::Text::NormalizationForm normalizationForm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::NormalizationForm>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source, normalizationForm);
}
inline ::StringW System::Text::Normalization::Normalize(::StringW source, int32_t type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "Normalize", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, source, type);
}
inline void System::Text::Normalization::load_normalization_resource(ByRef<void*> props, ByRef<void*> mappedChars, ByRef<void*> charMapIndex, ByRef<void*> helperIndex, ByRef<void*> mapIdxToComposite,
                                                                     ByRef<void*> combiningClass) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::Normalization*>::get(), "load_normalization_resource", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<void*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, props, mappedChars, charMapIndex, helperIndex, mapIdxToComposite, combiningClass);
}
// Ctor Parameters []
constexpr ::System::Text::Normalization::Normalization() {}

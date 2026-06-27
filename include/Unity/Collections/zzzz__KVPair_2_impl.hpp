#pragma once
// IWYU pragma private; include "Unity/Collections/KVPair_2.hpp"
#include "Unity/Collections/zzzz__KVPair_2_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__HashMapHelper_1_def.hpp"
template<typename TKey,typename TValue>
inline ::Unity::Collections::KVPair_2<TKey,TValue> Unity::Collections::KVPair_2<TKey,TValue>::get_Null()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::KVPair_2<TKey,TValue>>::get(),
                        "get_Null",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::KVPair_2<TKey,TValue>, false>(nullptr, ___internal_method);
}
template<typename TKey,typename TValue>
inline TKey Unity::Collections::KVPair_2<TKey,TValue>::get_Key()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::KVPair_2<TKey,TValue>>::get(),
                        "get_Key",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<TKey, false>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::ByRef<TValue> Unity::Collections::KVPair_2<TKey,TValue>::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::KVPair_2<TKey,TValue>>::get(),
                        "get_Value",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ByRef<TValue>, false>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool Unity::Collections::KVPair_2<TKey,TValue>::GetKeyValue(::ByRef<TKey>  key, ::ByRef<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::KVPair_2<TKey,TValue>>::get(),
                        "GetKeyValue",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TKey>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, value);
}
// Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Next", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::KVPair_2<TKey,TValue>::KVPair_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*  m_Data, int32_t  m_Index, int32_t  m_Next) noexcept  {
this->m_Data = m_Data;
this->m_Index = m_Index;
this->m_Next = m_Next;
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::Unity::Collections::KVPair_2<TKey,TValue>::KVPair_2()   {
}
